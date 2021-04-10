module.exports = grammar({
	name: 'structured_text',
	
	word: $ => $.identifier,
	
	conflicts: $ => [
		[$.case]
	],
	
	supertypes: $ => [
		$._definition,
		$.statement,
		$._control_statement,
		$._expression,
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
			$._control_statement,
			// expression statement
			// loop statement
		),
		
		_control_statement: $ => choice(
			$.case_statement,
			$.if_statement
		),
		
		assignment: $ => seq(
			$.identifier,
			':=',
			$.number,
			';'
		),
		
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
		
		/*
			Expressions
		*/
		
		_expression: $ => choice(
			$.literal,
			$.identifier, // (variable)
			// parenthises expression
			// unary expression
			// binary expression
		),
		
		/*
			Variables
		*/
		
		/*
			Literals
		*/
		
		literal: $ => choice(
			$.number, 
			// string
			// time or date
		),
		
		identifier: $ => token(/[a-zA-Z_]\w*/),
		
		number: $ => token(/\d+/)
	}
});
