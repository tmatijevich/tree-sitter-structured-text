module.exports = grammar({
  name: 'structured_text',
  
  extras: $ => [
    $.inline_comment,
    $.block_comment,
    /\s/
  ],
  
  word: $ => $.identifier, // Fixes comments leading program definitions
  
  rules: {
    // Declarations, definitions, statements, expressions, types, and patterns.
    source_file: $ => repeat($._definition),
    
    _definition: $ => choice(
      $.program_definition
    ),
    
    /*
      Routine definitions: Program, Function, Function block, Action
    */
    
    program_definition: $ => seq(
      'PROGRAM', // Opening keyword: PROGRAM, ACTION, FUNCTION, FUNCTION_BLOCK
      field('name', $.identifier),
      // Statements: Assignments, function block or function calls, variable calls, conditional statements, loop statements
      repeat($.statement),
      //field('body', repeat($.statement)),
      'END_PROGRAM'
    ),
    
    /*
      Statments: 
    */
    statement: $ => choice(
      $.assignment,
      $.expression_statement,
      $._control_statement,
      // loop_statement
    ),
    
    _control_statement: $ => choice(
      $.if_statement
    ),
    
    if_statement: $ => seq(
      'IF',
      field('Condition', $._expression),
      'THEN',
      repeat($.statement), // More IFs or assignments
      'END_IF'
    ),
    
    assignment: $ => seq(
      $.variable,
      choice(':=', 'ACCESS'),
      $._expression,
      ';'
    ),
    
    expression_statement: $ => seq(
      $._expression, // This can only be a variable of a function block call, not a literal
      ';'
    ),
    
    /*
      Expressions
    */
    _expression: $ => choice(
      $._literal,
      $.variable, // variable
      // literal
      seq('(', $._expression, ')'),// parenthises (expression)
      // function call
      $.unary_expression,// unary expression
      $.binary_expression// binary expression
    ),
    
    unary_expression: $ => prec(6, choice(
      seq(/NOT\s+/, $._expression),
      seq('-', $._expression)
    )),
    
    binary_expression: $ => choice(
      prec.left(5, seq($._expression, '**', $._expression)), // Power
      prec.left(4, seq($._expression, '*', $._expression)), // Multiplication
      prec.left(4, seq($._expression, '/', $._expression)), // Division
      prec.left(3, seq($._expression, '+', $._expression)), // Addition
      prec.left(3, seq($._expression, '-', $._expression)), // Subtraction
      prec.left(2, seq($._expression, '<', $._expression)), // Comparison
      prec.left(2, seq($._expression, '>', $._expression)), // Comparison
      prec.left(2, seq($._expression, '<=', $._expression)), // Comparison
      prec.left(2, seq($._expression, '>=', $._expression)), // Comparison
      prec.left(1, seq($._expression, '=', $._expression)), // Comparison
      prec.left(1, seq($._expression, '<>', $._expression)), // Comparison
      prec.left(0, seq($._expression, 'AND', $._expression)), // Logical AND, is this also bitwise?
      prec.left(0, seq($._expression, 'XOR', $._expression)), // Logical XOR
      prec.left(0, seq($._expression, 'OR', $._expression)) // Logical OR
    ),
    
    /*
      Variables
    */
    
    variable: $ => seq(
      field('name', $.identifier),
      optional($._index_array),
      optional($.dot_operator)
    ),
    
    _index_array: $ => seq(
      field('dim1', $.index),
      optional(field('dim2', $.index))
    ),
    
    index: $ => seq('[', choice($._expression), ']'),
    
    dot_operator: $ => seq(
      '.',
      choice(
        alias($.variable, $.member),
        /\d{1,2}/ // Is this allowed as a variable, or only as an expression?
      )
    ),
    
    /*
      Literals
    */
    _literal: $ => choice(
      $.number,
      // string
      // time
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
    identifier: $ => /[a-zA-Z_]\w*/ // Non-digit character followed by any character
  },
  
});
