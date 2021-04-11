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
    [$._variable_instance]
  ],
  
  supertypes: $ => [
    $._definition,
    $.statement,
    $._control_statement,
    $._loop_statement,
    // $._expression,
    $._literal,
  ],
  
  rules: {
    source_file: $ => repeat(choice(
      $._definition, 
      // declaration
    )),
    
    _definition: $ => choice(
      $.program_definition,
      // action
      // function defintion
    ),
    
    program_definition: $ => seq(
      'PROGRAM',
      field('ProgramName', $.identifier),
      repeat($.statement),
      'END_PROGRAM'
    ),
    
    /* 
      Statements
    */
    
    statement: $ => choice(
      $.assignment,
      $.expression_statement,
      $.call_statement,
      $._control_statement,
      $._loop_statement,
      // expression statement
    ),
    
    _control_statement: $ => choice(
      $.case_statement,
      $.if_statement
    ),
    
    _loop_statement: $ => choice(
      $.for_statement,
      // repeat statement
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
      field('CaseControlValue', $.identifier),
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
      $.expression_assignment,
      'TO',
      $._expression,
      optional(seq('BY', $._expression))
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
      $.call_expression
    ),
    
    expression_assignment: $ => seq(
      $.variable,
      ':=',
      $._expression
    ),
    
    _parenthesis_expression: $ => seq('(', $._expression, ')'),
    
    unary_expression: $ => prec(6, choice(
      seq('NOT', $._expression),
      seq('-', $._expression)
    )),
    
    binary_expression: $ => choice(
      prec.left(5, seq($._expression, '**', $._expression)),
      prec.left(4, seq($._expression, '*', $._expression)),
      prec.left(4, seq($._expression, '/', $._expression)),
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
    
    call_expression: $ => seq(
      $._variable_instance,
      '(',
      commaSep(choice($.expression_assignment, $._expression)),
      ')'
    ),
    
    /*
      Variables
    */
    
    _variable_instance: $ => seq(
      field('Name', $.identifier),
      optional($.index),
      optional($.structure_member)
    ),
    
    variable: $ => seq(
      $._variable_instance,
      optional($.bit_masking)
    ),
    
    index: $ => seq(
      '[',
      field('Dim1', $._expression),
      optional(seq(',', field('Dim2', $._expression))),
      ']'
    ),
    
    structure_member: $ => seq(token.immediate('.'), $._variable_instance),
    
    bit_masking: $ => seq(token.immediate('.'), /\d{1,2}/),
    
    /*
      Literals
    */
    
    _literal: $ => choice(
      $.number, 
      // string
      // time or date
    ),
    
    number: $ => {
      const integer = seq(
        optional(/[\+-]/),
        /\d/,
        repeat(choice('_', /\d/))
      );
      const scientific = seq(/[eE]/, integer);
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
