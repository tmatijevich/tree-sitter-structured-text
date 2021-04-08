module.exports = grammar({
	name: 'structured_text',
	
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
		
		case: $ => prec.right(1, seq(
			$.case_value,
			':',
			repeat(prec.right(2, $.statement))
		)),
		
		else_case: $ => seq(
			'ELSE',
			repeat($.statement)
		),
		
		case_value: $ => {
			const range = seq($.number, '..', $.number);
			return choice($.number, range, $.identifier);
		},
		
		assignment: $ => seq(
			$.identifier,
			':=',
			$.number,
			';'
		),
		
		identifier: $ => token(/[a-zA-Z_]\w*/),
		
		number: $ => token(/\d+/)
	}
});
