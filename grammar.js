module.exports = grammar({
	name: 'structured_text',
	
	word: $ => $.identifier,
	
	rules: {
		source_file: $ => repeat($.statement),
		
		statement: $ => choice(
			$.assignment,
			$.case_statement,
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
		
		case: $ => seq(
			$.case_value,
			repeat($.statement)
		),
		
		else_case: $ => seq(
			'ELSE',
			repeat($.statement)
		),
		
		case_value: $ => {
			const num = /\d+/;
			const range = seq(num, '..', num);
			const varConst = /[a-zA-Z_]\w*/;
			return token(seq(choice(num, range, varConst), /\s*:/));
		},
		
		assignment: $ => seq(
			$.lhs_expression,
			$.number,
			';'
		),
		
		lhs_expression: $ => {
			const varName = /[a-zA-Z_]\w*/;
			return token(seq(varName, /\s*:=/));
		},
		
		identifier: $ => token(/[a-zA-Z_]\w*/),
		
		number: $ => token(/\d+/)
	}
});
