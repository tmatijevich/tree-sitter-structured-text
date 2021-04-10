module.exports = grammar({
	name: 'structured_text',
	
	word: $ => $.identifier,
	
	conflicts: $ => [
		[$.case]
	],
	
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
			':',
			repeat($.statement)
		),
		
		else_case: $ => seq(
			'ELSE',
			repeat($.statement)
		),
		
		case_value: $ => choice($.number, $.case_range, $.identifier),
		
		case_range: $ => seq(
			field('lower', $.number),
			'..',
			field('upper', $.number)
		),
		
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
