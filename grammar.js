module.exports = grammar({
  name: 'structured_text',
  
  extras: $ => [
    $.inline_comment,
    $.block_comment,
    /\s/
  ],
  
  word: $ => $.identifier,
  
  conflicts: $ => [
    [$.case],
    [$.variable]
  ],
  
  supertypes: $ => [
    $._definition,
    $.statement,
    $._control_statement,
    $._loop_statement,
    // $._expression,
    $._literal
  ],
  
  rules: {
    source_file: $ => repeat(choice(
      $._definition, 
      // declaration
    )),
    
    _definition: $ => choice(
      $.program_definition,
      $.action_definition,
      // function defintion
    ),
    
    program_definition: $ => seq(
      'PROGRAM',
      field('ProgramName', $.identifier),
      repeat($.statement),
      'END_PROGRAM'
    ),
    
    action_definition: $ => seq(
      'ACTION',
      field('ActionName', $.identifier),
      ':',
      repeat($.statement),
      'END_ACTION'
    ),
    
    /* 
      Statements
    */
    
    statement: $ => choice(
      $.assignment,
      $.expression_statement,
      $.call_statement,
      $._control_statement,
      $._loop_statement
    ),
    
    _control_statement: $ => choice(
      $.case_statement,
      $.if_statement
    ),
    
    _loop_statement: $ => choice(
      $.for_statement,
      $.repeat_statement,
      $.while_statement
    ),
    
    assignment: $ => seq(
      $.variable,
      ':=',
      $._expression,
      ';'
    ),
    
    expression_statement: $ => seq($.variable, ';'),
    
    call_statement: $ => seq($.call_expression, ';'),
    
    if_statement: $ => seq(
      'IF',
      field('Condition', $._expression),
      'THEN',
      repeat($.statement),
      repeat($.elseif_clause),
      optional($.else_clause),
      'END_IF',
      optional(';')
    ),
    
    case_statement: $ => seq(
      'CASE',
      field('CaseControlValue', $.variable),
      'OF',
      repeat($.case),
      optional($.else_case),
      'END_CASE',
      optional(';')
    ),
    
    for_statement: $ => seq(
      'FOR',
      $.for_range,
      'DO',
      repeat($.statement),
      'END_FOR',
      optional(';')
    ),
    
    repeat_statement: $ => seq(
      'REPEAT',
      repeat($.statement),
      'UNTIL',
      field('TerminationCondition', $._expression),
      'END_REPEAT',
      optional(';')
    ),
    
    while_statement: $ => seq(
      'WHILE',
      $._expression,
      'DO',
      repeat($.statement),
      'END_WHILE',
      optional(';')
    ),
    
    /*
      Statement components
    */
    
    elseif_clause: $ => seq(
      'ELSIF',
      field('ElsifCondition', $._expression),
      'THEN',
      repeat($.statement)
    ),
    
    else_clause: $ => seq(
      'ELSE',
      repeat($.statement)
    ),
    
    case: $ => seq(
      $.case_value,
      ':',
      repeat($.statement)
    ),
    
    else_case: $ => seq(
      'ELSE',
      repeat($.statement)
    ),
    
    case_value: $ => choice($.number, $.case_range, $.identifier),
    
    case_range: $ => seq(
      field('LowerLimit', $.number),
      '..',
      field('UpperLimit', $.number)
    ),
    
    for_range: $ => seq(
      $.statement_initialization,
      'TO',
      $._expression,
      optional(seq('BY', $._expression))
    ),
    
    statement_initialization: $ => seq(
      $.variable, 
      ':=', 
      $._expression
    ),
    
    /*
      Expressions
    */
    
    _expression: $ => choice(
      $._literal,
      $.variable,
      $._parenthesis_expression,
      $.unary_expression,
      $.binary_expression,
      $.mask_expression,
      $.call_expression
    ),
    
    _parenthesis_expression: $ => seq('(', $._expression, ')'),
    
    unary_expression: $ => prec(6, choice(
      seq('NOT', $._expression),
      seq('+', $._expression),
      seq('-', $._expression)
    )),
    
    binary_expression: $ => choice(
      prec.left(5, seq($._expression, '**', $._expression)),
      prec.left(4, seq($._expression, '*', $._expression)),
      prec.left(4, seq($._expression, '/', $._expression)),
      prec.left(4, seq($._expression, 'MOD', $._expression)),
      prec.left(3, seq($._expression, '+', $._expression)),
      prec.left(3, seq($._expression, '-', $._expression)),
      prec.left(2, seq($._expression, '<', $._expression)),
      prec.left(2, seq($._expression, '>', $._expression)),
      prec.left(2, seq($._expression, '<=', $._expression)),
      prec.left(2, seq($._expression, '>=', $._expression)),
      prec.left(1, seq($._expression, '=', $._expression)),
      prec.left(1, seq($._expression, '<>', $._expression)),
      prec.left(0, seq($._expression, 'AND', $._expression)),
      prec.left(0, seq($._expression, 'XOR', $._expression)),
      prec.left(0, seq($._expression, 'OR', $._expression))
    ),
    
    parameter_assignment: $ => seq(
      alias($.identifier, $.parameter),
      ':=',
      $._expression
    ),
    
    call_expression: $ => seq(
      field('FunctionName', $.identifier),
      optional($.index), // Only for function block instances
      '(',
      commaSep(choice($.parameter_assignment, $._expression)), // Function calls have ordered lists allowing expressions
      ')'
    ),
    
    mask_expression: $ => seq(
      $.variable, 
      token.immediate('.'), 
      /\d{1,2}/
    ),
    
    /*
      Variables
    */
    
    variable: $ => seq(
      field('Name', $.identifier),
      optional($.index),
      optional($.structure_member)
    ),
    
    index: $ => seq(
      '[',
      field('Dim1', $._expression),
      optional(seq(',', field('Dim2', $._expression))),
      ']'
    ),
    
    structure_member: $ => seq(token.immediate('.'), choice($.variable, $.call_expression)),
    
    /*
      Literals
    */
    
    _literal: $ => choice(
      $.boolean,
      $.number, 
      $.string,
      // time or date
    ),
    
    boolean: $ => token(choice('TRUE', 'FALSE')),
    
    number: $ => {
      const integer = seq(
        /\d/,
        repeat(choice('_', /\d/))
      );
      const scientific = seq(/[eE]/, optional(/[\+-]/), integer);
      const floatingPoint = seq(
        integer,
        choice(
          seq(
            '.',
            repeat(choice('_', /\d/)),
            optional(scientific)
          ),
          scientific
        )
      );
      const binary = seq('2#', /_*[0-1]/, repeat(choice('_', /[0-1]/)));
      const octal = seq('8#', /_*[0-7]/, repeat(choice('_', /[0-7]/)));
      const hexidecimal = seq('16#', /_*[0-9a-fA-F]/, repeat(choice('_', /[0-9a-fA-F]/)));
      return token(choice(integer, floatingPoint, binary, octal, hexidecimal));
    },
    
    string: $ => token(prec.left(seq(
      '\'',
      /.*/,
      '\''
    ))),
    
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
    
    identifier: $ => /[a-zA-Z_]\w*/,
    
  }
  
});

function commaSep1(rule) {
  return seq(rule, repeat(seq(',', rule)));
}

function commaSep(rule) {
  return optional(commaSep1(rule));
}
