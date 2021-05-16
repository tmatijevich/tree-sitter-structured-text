const unsignedInteger = seq(
  /\d/,
  repeat(choice('_', /\d/))
);

const signedInteger = seq(
  optional(/[\+-]/), 
  unsignedInteger
);

module.exports = grammar({
  name: 'structured_text',
  
  extras: $ => [
    $.inline_comment,
    $.block_comment,
    /\s/
  ],
  
  word: $ => $.identifier,
  
  conflicts: $ => [
    //[$.case],
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
      //$.expression_statement,
      //$.call_statement,
      //$._control_statement,
      //$._loop_statement
    ),
    
    _control_statement: $ => choice(
      //$.case_statement,
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
    
    // case_statement: $ => seq(
    //   'CASE',
    //   field('CaseControlValue', $.variable),
    //   'OF',
    //   repeat($.case),
    //   optional($.else_case),
    //   'END_CASE',
    //   optional(';')
    // ),
    
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
    
    // case: $ => seq(
    //   $.case_value,
    //   ':',
    //   repeat($.statement)
    // ),
    // 
    // else_case: $ => seq(
    //   'ELSE',
    //   repeat($.statement)
    // ),
    // 
    // case_value: $ => choice($.number, $.case_range, $.identifier),
    // 
    // case_range: $ => seq(
    //   field('LowerLimit', $.number),
    //   '..',
    //   field('UpperLimit', $.number)
    // ),
    
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
      //$._parenthesis_expression,
      $.unary_expression,
      //$.binary_expression,
      //$.mask_expression,
      //$.call_expression
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
      $.integer,
      $.floating_point,
      $.binary,
      $.octal,
      $.hexidecimal,
      $.time,
      $.date,
      $.time_of_day,
      $.date_and_time,
      $.string,
      $.wstring
    ),
    
    boolean: $ => token(choice('TRUE', 'FALSE')),
    
    integer: $ => {
      return token(unsignedInteger);
    },
    
    floating_point: $ => {
      const scientific = seq(/[eE]/, signedInteger);
      return token(seq(
        unsignedInteger,
        choice(
          seq(
            '.',
            repeat(choice('_', /\d/)),
            optional(scientific)
          ),
          scientific
        )
      ));
    },
    
    binary: $ => token(seq('2#', /_*[0-1]/, repeat(choice('_', /[0-1]/)))),
    
    octal: $ => token(seq('8#', /_*[0-7]/, repeat(choice('_', /[0-7]/)))),
    
    hexidecimal: $ => token(seq('16#', /_*[0-9a-fA-F]/, repeat(choice('_', /[0-9a-fA-F]/)))),
    
    time: $ => token(seq(
      'T#',
      optional('-'),
      optional(/\d{1,2}[dD]/),
      optional(/\d{1,3}[hH]/),
      optional(/\d{1,5}[mM]/),
      optional(/\d{1,9}[sS]/),
      optional(/\d{1,9}((ms)|(MS))/)
    )),
    
    date: $ => token(seq(
      'D#',
      /\d(_?\d){3}/, // Year
      /(-\d(_?\d)?){2}/ // Month and day
    )),
    
    time_of_day: $ => token(seq(
      'TOD#',
      /\d(_?\d)?/,
      ':',
      /\d(_?\d)?/,
      optional(seq(
        ':',
        /\d(_?\d)?/,
        optional(seq('.', /\d(_?\d)*/))
      ))
    )),
    
    date_and_time: $ => seq(
      'DT#',
      /\d(_?\d){3}/, // Year
      /(-\d(_?\d)?){3}/, // Month, day, hour
      /(:\d(_?\d)?){1,2}/ // Minute, second
    ),
    
    string: $ => token(prec.left(seq(
      '\'',
      /.*/,
      '\''
    ))),
    
    wstring: $ => token(prec.left(seq(
      '"',
      /.*/,
      '"'
    ))),
    
    inline_comment: $ => token(seq('//', /.*/)),
    
    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    block_comment: $ => token(seq(
      '(*',
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
