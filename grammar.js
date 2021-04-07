module.exports = grammar({
  name: 'structured_text',
  
  extras: $ => [
    $.inline_comment,
    $.block_comment,
    /\s/
  ],
  
  supertypes: $ => [
    $._definition, 
    $.statement,
    $._control_statement,
    $._expression,
    $._literal
  ],
  
  conflicts: $ => [
    [$.case_body, $.case_value, $.statement, $.assignment]
  ],
  
  word: $ => $.identifier, // Fixes comments leading program definitions
  
  rules: {
    source_file: $ => repeat($._definition),
    
    _definition: $ => choice(
      $.program_definition
    ),
    
    program_definition: $ => seq(
      'PROGRAM',
      field('name', $.identifier),
      repeat($.statement),
      'END_PROGRAM'
    ),
    
    /*
      Statements
    */
    statement: $ => choice(
      $.assignment,
      $._control_statement,
    ),
    
    _control_statement: $ => choice(
      $.case_statement,
    ),
    
    case_statement: $ => seq(
      'CASE',
      field('CaseControlValue', $._expression),
      'OF',
      optional($.case_body),
      optional($.case_else_clause),
      'END_CASE',
      optional(';')
    ),
    
    assignment: $ => seq(
      $.identifier,
      choice(':=', 'ACCESS'),
      $._expression,
      ';'
    ),
    
    /*
      Statement components
    */
    
    case_body: $ => repeat1(prec.right(1, seq(
      $.case_value,
      ':',
      repeat(prec.right(2, $.statement))
    ))),
    
    case_else_clause: $ => seq(
      'ELSE',
      repeat($.statement)
    ),
    
    case_value: $ => {
      const decimal = token(seq(
        optional(/[\+-]/),
        /\d/,
        repeat(choice('_', /\d/))
      ));
      const range = token(seq(decimal, '..', decimal));
      return commaSep1(choice(decimal, range, $.identifier));
    },
    
    /*
      Expressions
    */
    _expression: $ => choice(
      $._literal,
      $.identifier
    ),
    
    /*
      Literals
    */
    _literal: $ => choice(
      $.number,
    ),
    
    number: $ => {
      const decimal = seq(
        optional(/[\+-]/),
        /\d/,
        repeat(choice('_', /\d/))
      );
      const floating_point = choice(
        seq(
          decimal, 
          '.',
          repeat(choice('_', /\d/)),
          optional(seq(/[eE]/, decimal))
        ),
        seq(decimal, /[eE]/, decimal)
      );
      return token(choice(decimal, floating_point));
    },
    
    /*
      Comments: Reviewed tree-sitter-javascript\grammar.js and tree-sitter-c\grammar.js
    */
    inline_comment: $ => token(seq('//', /.*/)), // token fixes rust backtrace warning
    
    block_comment: $ => token(seq( // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
      '(*',
      // 1. Match 0+ characters other than `*`, followed by 1+ literal `*`: `[^*]*\*+`
      // 2. 0+ of:
      // 2a. Not a `*` or `)`
      // 2b. 0+ non-asterisk
      // 2c. 1+ asterisk
      /[^*]*\*+([^*)][^*]*\*+)*/,
      ')'
    )),
    
    // Function, function block, or variable name
    identifier: $ => token(/[a-zA-Z_]\w*/) // Non-digit character followed by any character
    
  },
  
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
