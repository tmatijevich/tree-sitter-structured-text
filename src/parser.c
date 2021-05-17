#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 181
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 110
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 20

enum {
  sym_identifier = 1,
  anon_sym_PROGRAM = 2,
  anon_sym_END_PROGRAM = 3,
  anon_sym_ACTION = 4,
  anon_sym_COLON = 5,
  anon_sym_END_ACTION = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_SEMI = 8,
  anon_sym_IF = 9,
  anon_sym_THEN = 10,
  anon_sym_END_IF = 11,
  anon_sym_CASE = 12,
  anon_sym_OF = 13,
  anon_sym_END_CASE = 14,
  anon_sym_FOR = 15,
  anon_sym_DO = 16,
  anon_sym_END_FOR = 17,
  anon_sym_REPEAT = 18,
  anon_sym_UNTIL = 19,
  anon_sym_END_REPEAT = 20,
  anon_sym_WHILE = 21,
  anon_sym_END_WHILE = 22,
  anon_sym_ELSIF = 23,
  anon_sym_ELSE = 24,
  aux_sym_case_value_token1 = 25,
  anon_sym_COMMA = 26,
  anon_sym_DOT_DOT = 27,
  anon_sym_TO = 28,
  anon_sym_BY = 29,
  anon_sym_LPAREN = 30,
  anon_sym_RPAREN = 31,
  anon_sym_NOT = 32,
  anon_sym_PLUS = 33,
  anon_sym_DASH = 34,
  anon_sym_STAR_STAR = 35,
  anon_sym_STAR = 36,
  anon_sym_SLASH = 37,
  anon_sym_MOD = 38,
  anon_sym_LT = 39,
  anon_sym_GT = 40,
  anon_sym_LT_EQ = 41,
  anon_sym_GT_EQ = 42,
  anon_sym_EQ = 43,
  anon_sym_LT_GT = 44,
  anon_sym_AND = 45,
  anon_sym_XOR = 46,
  anon_sym_OR = 47,
  anon_sym_DOT = 48,
  aux_sym_mask_expression_token1 = 49,
  anon_sym_LBRACK = 50,
  anon_sym_RBRACK = 51,
  sym_boolean = 52,
  sym_integer = 53,
  sym_floating_point = 54,
  sym_binary = 55,
  sym_octal = 56,
  sym_hexidecimal = 57,
  sym_time = 58,
  sym_date = 59,
  sym_time_of_day = 60,
  anon_sym_DT_POUND = 61,
  aux_sym_date_and_time_token1 = 62,
  aux_sym_date_and_time_token2 = 63,
  aux_sym_date_and_time_token3 = 64,
  sym_string = 65,
  sym_wstring = 66,
  sym_inline_comment = 67,
  sym_block_comment = 68,
  sym_source_file = 69,
  sym__definition = 70,
  sym_program_definition = 71,
  sym_action_definition = 72,
  sym_statement = 73,
  sym__control_statement = 74,
  sym__loop_statement = 75,
  sym_assignment = 76,
  sym_expression_statement = 77,
  sym_call_statement = 78,
  sym_if_statement = 79,
  sym_case_statement = 80,
  sym_for_statement = 81,
  sym_repeat_statement = 82,
  sym_while_statement = 83,
  sym_elseif_clause = 84,
  sym_else_clause = 85,
  sym_case = 86,
  sym_else_case = 87,
  sym_case_value = 88,
  sym_case_range = 89,
  sym_for_range = 90,
  sym_statement_initialization = 91,
  sym__expression = 92,
  sym_parenthesis_expression = 93,
  sym_unary_expression = 94,
  sym_binary_expression = 95,
  sym_parameter_assignment = 96,
  sym_call_expression = 97,
  sym_mask_expression = 98,
  sym_variable = 99,
  sym_index = 100,
  sym_structure_member = 101,
  sym__literal = 102,
  sym_date_and_time = 103,
  aux_sym_source_file_repeat1 = 104,
  aux_sym_program_definition_repeat1 = 105,
  aux_sym_if_statement_repeat1 = 106,
  aux_sym_case_statement_repeat1 = 107,
  aux_sym_case_value_repeat1 = 108,
  aux_sym_call_expression_repeat1 = 109,
  alias_sym_parameter = 110,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_END_PROGRAM] = "END_PROGRAM",
  [anon_sym_ACTION] = "ACTION",
  [anon_sym_COLON] = ":",
  [anon_sym_END_ACTION] = "END_ACTION",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_END_IF] = "END_IF",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_FOR] = "FOR",
  [anon_sym_DO] = "DO",
  [anon_sym_END_FOR] = "END_FOR",
  [anon_sym_REPEAT] = "REPEAT",
  [anon_sym_UNTIL] = "UNTIL",
  [anon_sym_END_REPEAT] = "END_REPEAT",
  [anon_sym_WHILE] = "WHILE",
  [anon_sym_END_WHILE] = "END_WHILE",
  [anon_sym_ELSIF] = "ELSIF",
  [anon_sym_ELSE] = "ELSE",
  [aux_sym_case_value_token1] = "integer",
  [anon_sym_COMMA] = ",",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_TO] = "TO",
  [anon_sym_BY] = "BY",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_NOT] = "NOT",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_MOD] = "MOD",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_AND] = "AND",
  [anon_sym_XOR] = "XOR",
  [anon_sym_OR] = "OR",
  [anon_sym_DOT] = ".",
  [aux_sym_mask_expression_token1] = "mask_expression_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_boolean] = "boolean",
  [sym_integer] = "integer",
  [sym_floating_point] = "floating_point",
  [sym_binary] = "binary",
  [sym_octal] = "octal",
  [sym_hexidecimal] = "hexidecimal",
  [sym_time] = "time",
  [sym_date] = "date",
  [sym_time_of_day] = "time_of_day",
  [anon_sym_DT_POUND] = "DT#",
  [aux_sym_date_and_time_token1] = "date_and_time_token1",
  [aux_sym_date_and_time_token2] = "date_and_time_token2",
  [aux_sym_date_and_time_token3] = "date_and_time_token3",
  [sym_string] = "string",
  [sym_wstring] = "wstring",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_program_definition] = "program_definition",
  [sym_action_definition] = "action_definition",
  [sym_statement] = "statement",
  [sym__control_statement] = "_control_statement",
  [sym__loop_statement] = "_loop_statement",
  [sym_assignment] = "assignment",
  [sym_expression_statement] = "expression_statement",
  [sym_call_statement] = "call_statement",
  [sym_if_statement] = "if_statement",
  [sym_case_statement] = "case_statement",
  [sym_for_statement] = "for_statement",
  [sym_repeat_statement] = "repeat_statement",
  [sym_while_statement] = "while_statement",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
  [sym_case] = "case",
  [sym_else_case] = "else_case",
  [sym_case_value] = "case_value",
  [sym_case_range] = "case_range",
  [sym_for_range] = "for_range",
  [sym_statement_initialization] = "statement_initialization",
  [sym__expression] = "_expression",
  [sym_parenthesis_expression] = "parenthesis_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parameter_assignment] = "parameter_assignment",
  [sym_call_expression] = "call_expression",
  [sym_mask_expression] = "mask_expression",
  [sym_variable] = "variable",
  [sym_index] = "index",
  [sym_structure_member] = "structure_member",
  [sym__literal] = "_literal",
  [sym_date_and_time] = "date_and_time",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_case_value_repeat1] = "case_value_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
  [alias_sym_parameter] = "parameter",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_END_PROGRAM] = anon_sym_END_PROGRAM,
  [anon_sym_ACTION] = anon_sym_ACTION,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_END_ACTION] = anon_sym_END_ACTION,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_END_IF] = anon_sym_END_IF,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_END_CASE] = anon_sym_END_CASE,
  [anon_sym_FOR] = anon_sym_FOR,
  [anon_sym_DO] = anon_sym_DO,
  [anon_sym_END_FOR] = anon_sym_END_FOR,
  [anon_sym_REPEAT] = anon_sym_REPEAT,
  [anon_sym_UNTIL] = anon_sym_UNTIL,
  [anon_sym_END_REPEAT] = anon_sym_END_REPEAT,
  [anon_sym_WHILE] = anon_sym_WHILE,
  [anon_sym_END_WHILE] = anon_sym_END_WHILE,
  [anon_sym_ELSIF] = anon_sym_ELSIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [aux_sym_case_value_token1] = sym_integer,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_TO] = anon_sym_TO,
  [anon_sym_BY] = anon_sym_BY,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_NOT] = anon_sym_NOT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_MOD] = anon_sym_MOD,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_mask_expression_token1] = aux_sym_mask_expression_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_boolean] = sym_boolean,
  [sym_integer] = sym_integer,
  [sym_floating_point] = sym_floating_point,
  [sym_binary] = sym_binary,
  [sym_octal] = sym_octal,
  [sym_hexidecimal] = sym_hexidecimal,
  [sym_time] = sym_time,
  [sym_date] = sym_date,
  [sym_time_of_day] = sym_time_of_day,
  [anon_sym_DT_POUND] = anon_sym_DT_POUND,
  [aux_sym_date_and_time_token1] = aux_sym_date_and_time_token1,
  [aux_sym_date_and_time_token2] = aux_sym_date_and_time_token2,
  [aux_sym_date_and_time_token3] = aux_sym_date_and_time_token3,
  [sym_string] = sym_string,
  [sym_wstring] = sym_wstring,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_program_definition] = sym_program_definition,
  [sym_action_definition] = sym_action_definition,
  [sym_statement] = sym_statement,
  [sym__control_statement] = sym__control_statement,
  [sym__loop_statement] = sym__loop_statement,
  [sym_assignment] = sym_assignment,
  [sym_expression_statement] = sym_expression_statement,
  [sym_call_statement] = sym_call_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_repeat_statement] = sym_repeat_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_elseif_clause] = sym_elseif_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_case] = sym_case,
  [sym_else_case] = sym_else_case,
  [sym_case_value] = sym_case_value,
  [sym_case_range] = sym_case_range,
  [sym_for_range] = sym_for_range,
  [sym_statement_initialization] = sym_statement_initialization,
  [sym__expression] = sym__expression,
  [sym_parenthesis_expression] = sym_parenthesis_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parameter_assignment] = sym_parameter_assignment,
  [sym_call_expression] = sym_call_expression,
  [sym_mask_expression] = sym_mask_expression,
  [sym_variable] = sym_variable,
  [sym_index] = sym_index,
  [sym_structure_member] = sym_structure_member,
  [sym__literal] = sym__literal,
  [sym_date_and_time] = sym_date_and_time,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [aux_sym_case_value_repeat1] = aux_sym_case_value_repeat1,
  [aux_sym_call_expression_repeat1] = aux_sym_call_expression_repeat1,
  [alias_sym_parameter] = alias_sym_parameter,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_PROGRAM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_ACTION] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_CASE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_FOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_REPEAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_UNTIL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_REPEAT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_END_WHILE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_case_value_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_MOD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_XOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_OR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_mask_expression_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point] = {
    .visible = true,
    .named = true,
  },
  [sym_binary] = {
    .visible = true,
    .named = true,
  },
  [sym_octal] = {
    .visible = true,
    .named = true,
  },
  [sym_hexidecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_time] = {
    .visible = true,
    .named = true,
  },
  [sym_date] = {
    .visible = true,
    .named = true,
  },
  [sym_time_of_day] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DT_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_date_and_time_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_and_time_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_date_and_time_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_wstring] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_program_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_action_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__control_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__loop_statement] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_call_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_repeat_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_case] = {
    .visible = true,
    .named = true,
  },
  [sym_else_case] = {
    .visible = true,
    .named = true,
  },
  [sym_case_value] = {
    .visible = true,
    .named = true,
  },
  [sym_case_range] = {
    .visible = true,
    .named = true,
  },
  [sym_for_range] = {
    .visible = true,
    .named = true,
  },
  [sym_statement_initialization] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_parenthesis_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_mask_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_structure_member] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_date_and_time] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_call_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_parameter] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_ActionName = 1,
  field_caseControlValue = 2,
  field_condition = 3,
  field_dim1 = 4,
  field_dim2 = 5,
  field_elsifCondition = 6,
  field_functionName = 7,
  field_input = 8,
  field_lowerBound = 9,
  field_name = 10,
  field_programName = 11,
  field_terminationCondition = 12,
  field_upperBound = 13,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_ActionName] = "ActionName",
  [field_caseControlValue] = "caseControlValue",
  [field_condition] = "condition",
  [field_dim1] = "dim1",
  [field_dim2] = "dim2",
  [field_elsifCondition] = "elsifCondition",
  [field_functionName] = "functionName",
  [field_input] = "input",
  [field_lowerBound] = "lowerBound",
  [field_name] = "name",
  [field_programName] = "programName",
  [field_terminationCondition] = "terminationCondition",
  [field_upperBound] = "upperBound",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 1},
  [8] = {.index = 7, .length = 2},
  [9] = {.index = 9, .length = 1},
  [10] = {.index = 10, .length = 1},
  [12] = {.index = 11, .length = 1},
  [13] = {.index = 12, .length = 3},
  [14] = {.index = 15, .length = 2},
  [15] = {.index = 17, .length = 2},
  [16] = {.index = 19, .length = 1},
  [17] = {.index = 20, .length = 2},
  [18] = {.index = 22, .length = 2},
  [19] = {.index = 24, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_programName, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_ActionName, 1},
  [3] =
    {field_functionName, 0},
  [4] =
    {field_condition, 1},
  [5] =
    {field_caseControlValue, 1},
  [6] =
    {field_terminationCondition, 2},
  [7] =
    {field_functionName, 0},
    {field_input, 2},
  [9] =
    {field_dim1, 1},
  [10] =
    {field_terminationCondition, 3},
  [11] =
    {field_input, 1},
  [12] =
    {field_functionName, 0},
    {field_input, 2},
    {field_input, 3, .inherited = true},
  [15] =
    {field_input, 0, .inherited = true},
    {field_input, 1, .inherited = true},
  [17] =
    {field_functionName, 0},
    {field_input, 3},
  [19] =
    {field_elsifCondition, 1},
  [20] =
    {field_lowerBound, 0},
    {field_upperBound, 2},
  [22] =
    {field_dim1, 1},
    {field_dim2, 3},
  [24] =
    {field_functionName, 0},
    {field_input, 3},
    {field_input, 4, .inherited = true},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [0] = alias_sym_parameter,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(95);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(117);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '2') ADVANCE(119);
      if (lookahead == '8') ADVANCE(120);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '8') ADVANCE(129);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(131);
      if (lookahead == '2') ADVANCE(128);
      if (lookahead == '8') ADVANCE(129);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(172);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 7:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(89);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(62);
      END_STATE();
    case 8:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 9:
      if (lookahead == ')') ADVANCE(170);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(67);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(68);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(68);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '-') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == '-') ADVANCE(83);
      if (lookahead == '_') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '-') ADVANCE(92);
      END_STATE();
    case 18:
      if (lookahead == '-') ADVANCE(92);
      if (lookahead == '_') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(169);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(77);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 24:
      if (lookahead == '=') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(165);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(149);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(151);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 34:
      if (lookahead == 'M') ADVANCE(146);
      if (lookahead == 'm') ADVANCE(147);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      END_STATE();
    case 37:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(150);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 50:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 53:
      if (lookahead == 'S') ADVANCE(144);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(54);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 58:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 59:
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 60:
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 61:
      if (lookahead == '_') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 62:
      if (lookahead == '_') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(144);
      END_STATE();
    case 64:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(166);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(162);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 89:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 90:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 91:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 92:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 93:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 94:
      if (eof) ADVANCE(95);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(4);
      if (lookahead == '(') ADVANCE(103);
      if (lookahead == ')') ADVANCE(104);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == ',') ADVANCE(101);
      if (lookahead == '-') ADVANCE(106);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(109);
      if (lookahead == '1') ADVANCE(122);
      if (lookahead == '2') ADVANCE(119);
      if (lookahead == '8') ADVANCE(120);
      if (lookahead == ':') ADVANCE(97);
      if (lookahead == ';') ADVANCE(99);
      if (lookahead == '<') ADVANCE(110);
      if (lookahead == '=') ADVANCE(114);
      if (lookahead == '>') ADVANCE(111);
      if (lookahead == 'D') ADVANCE(171);
      if (lookahead == 'T') ADVANCE(173);
      if (lookahead == '[') ADVANCE(126);
      if (lookahead == ']') ADVANCE(127);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(94)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(98);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_case_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(11);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(107);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(169);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(112);
      if (lookahead == '>') ADVANCE(115);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '6') ADVANCE(121);
      if (lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '_') ADVANCE(135);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(54);
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(56);
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(139);
      if (lookahead == '6') ADVANCE(130);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(139);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(140);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_hexidecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '-') ADVANCE(148);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'S') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '_') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '.') ADVANCE(81);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '.') ADVANCE(81);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == ':') ADVANCE(79);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == ':') ADVANCE(79);
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_DT_POUND);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_date_and_time_token1);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_date_and_time_token2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_date_and_time_token2);
      if (lookahead == '_') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == ':') ADVANCE(72);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == ':') ADVANCE(72);
      if (lookahead == '_') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(164);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(163);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(4);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_wstring);
      if (lookahead == '"') ADVANCE(168);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(169);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(65);
      if (lookahead == 'T') ADVANCE(174);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == 'O') ADVANCE(176);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(159);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(175);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(177);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'C') ADVANCE(3);
      if (lookahead == 'D') ADVANCE(4);
      if (lookahead == 'E') ADVANCE(5);
      if (lookahead == 'F') ADVANCE(6);
      if (lookahead == 'I') ADVANCE(7);
      if (lookahead == 'M') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      if (lookahead == 'O') ADVANCE(10);
      if (lookahead == 'P') ADVANCE(11);
      if (lookahead == 'R') ADVANCE(12);
      if (lookahead == 'T') ADVANCE(13);
      if (lookahead == 'U') ADVANCE(14);
      if (lookahead == 'W') ADVANCE(15);
      if (lookahead == 'X') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(17);
      if (lookahead == 'N') ADVANCE(18);
      END_STATE();
    case 2:
      if (lookahead == 'Y') ADVANCE(19);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'O') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'L') ADVANCE(22);
      if (lookahead == 'N') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(24);
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'F') ADVANCE(26);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(29);
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'H') ADVANCE(33);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 14:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 15:
      if (lookahead == 'H') ADVANCE(37);
      END_STATE();
    case 16:
      if (lookahead == 'O') ADVANCE(38);
      END_STATE();
    case 17:
      if (lookahead == 'T') ADVANCE(39);
      END_STATE();
    case 18:
      if (lookahead == 'D') ADVANCE(40);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BY);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 23:
      if (lookahead == 'D') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'L') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'R') ADVANCE(45);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 27:
      if (lookahead == 'D') ADVANCE(46);
      END_STATE();
    case 28:
      if (lookahead == 'T') ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 31:
      if (lookahead == 'O') ADVANCE(48);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(49);
      END_STATE();
    case 33:
      if (lookahead == 'E') ADVANCE(50);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 35:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'T') ADVANCE(52);
      END_STATE();
    case 37:
      if (lookahead == 'I') ADVANCE(53);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 'I') ADVANCE(55);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 41:
      if (lookahead == 'E') ADVANCE(56);
      END_STATE();
    case 42:
      if (lookahead == 'E') ADVANCE(57);
      if (lookahead == 'I') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == '_') ADVANCE(59);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(60);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_MOD);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 48:
      if (lookahead == 'G') ADVANCE(61);
      END_STATE();
    case 49:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 50:
      if (lookahead == 'N') ADVANCE(63);
      END_STATE();
    case 51:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 52:
      if (lookahead == 'I') ADVANCE(65);
      END_STATE();
    case 53:
      if (lookahead == 'L') ADVANCE(66);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 55:
      if (lookahead == 'O') ADVANCE(67);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 58:
      if (lookahead == 'F') ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'A') ADVANCE(69);
      if (lookahead == 'C') ADVANCE(70);
      if (lookahead == 'F') ADVANCE(71);
      if (lookahead == 'I') ADVANCE(72);
      if (lookahead == 'P') ADVANCE(73);
      if (lookahead == 'R') ADVANCE(74);
      if (lookahead == 'W') ADVANCE(75);
      END_STATE();
    case 60:
      if (lookahead == 'E') ADVANCE(64);
      END_STATE();
    case 61:
      if (lookahead == 'R') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'A') ADVANCE(77);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 65:
      if (lookahead == 'L') ADVANCE(78);
      END_STATE();
    case 66:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 67:
      if (lookahead == 'N') ADVANCE(80);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_ELSIF);
      END_STATE();
    case 69:
      if (lookahead == 'C') ADVANCE(81);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(82);
      END_STATE();
    case 71:
      if (lookahead == 'O') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'F') ADVANCE(84);
      END_STATE();
    case 73:
      if (lookahead == 'R') ADVANCE(85);
      END_STATE();
    case 74:
      if (lookahead == 'E') ADVANCE(86);
      END_STATE();
    case 75:
      if (lookahead == 'H') ADVANCE(87);
      END_STATE();
    case 76:
      if (lookahead == 'A') ADVANCE(88);
      END_STATE();
    case 77:
      if (lookahead == 'T') ADVANCE(89);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_UNTIL);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_ACTION);
      END_STATE();
    case 81:
      if (lookahead == 'T') ADVANCE(90);
      END_STATE();
    case 82:
      if (lookahead == 'S') ADVANCE(91);
      END_STATE();
    case 83:
      if (lookahead == 'R') ADVANCE(92);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_END_IF);
      END_STATE();
    case 85:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 86:
      if (lookahead == 'P') ADVANCE(94);
      END_STATE();
    case 87:
      if (lookahead == 'I') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'M') ADVANCE(96);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_REPEAT);
      END_STATE();
    case 90:
      if (lookahead == 'I') ADVANCE(97);
      END_STATE();
    case 91:
      if (lookahead == 'E') ADVANCE(98);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_END_FOR);
      END_STATE();
    case 93:
      if (lookahead == 'G') ADVANCE(99);
      END_STATE();
    case 94:
      if (lookahead == 'E') ADVANCE(100);
      END_STATE();
    case 95:
      if (lookahead == 'L') ADVANCE(101);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 97:
      if (lookahead == 'O') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    case 99:
      if (lookahead == 'R') ADVANCE(103);
      END_STATE();
    case 100:
      if (lookahead == 'A') ADVANCE(104);
      END_STATE();
    case 101:
      if (lookahead == 'E') ADVANCE(105);
      END_STATE();
    case 102:
      if (lookahead == 'N') ADVANCE(106);
      END_STATE();
    case 103:
      if (lookahead == 'A') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'T') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_END_WHILE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_END_ACTION);
      END_STATE();
    case 107:
      if (lookahead == 'M') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_END_REPEAT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 5},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 5},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 5},
  [82] = {.lex_state = 5},
  [83] = {.lex_state = 5},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 5},
  [88] = {.lex_state = 5},
  [89] = {.lex_state = 5},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 5},
  [92] = {.lex_state = 5},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 5},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 5},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 5},
  [100] = {.lex_state = 5},
  [101] = {.lex_state = 5},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 5},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 5},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 5},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 5},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 5},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 5},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 5},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 5},
  [119] = {.lex_state = 5},
  [120] = {.lex_state = 5},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 5},
  [123] = {.lex_state = 5},
  [124] = {.lex_state = 5},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 5},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 5},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 7},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 0},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 7},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 7},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 5},
  [158] = {.lex_state = 5},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 7},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 7},
  [164] = {.lex_state = 5},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 7},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 5},
  [175] = {.lex_state = 7},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 8},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 7},
  [180] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_END_PROGRAM] = ACTIONS(1),
    [anon_sym_ACTION] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_END_ACTION] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_END_CASE] = ACTIONS(1),
    [anon_sym_FOR] = ACTIONS(1),
    [anon_sym_DO] = ACTIONS(1),
    [anon_sym_END_FOR] = ACTIONS(1),
    [anon_sym_REPEAT] = ACTIONS(1),
    [anon_sym_UNTIL] = ACTIONS(1),
    [anon_sym_END_REPEAT] = ACTIONS(1),
    [anon_sym_WHILE] = ACTIONS(1),
    [anon_sym_END_WHILE] = ACTIONS(1),
    [anon_sym_ELSIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_TO] = ACTIONS(1),
    [anon_sym_BY] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_NOT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_MOD] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_mask_expression_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_boolean] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_binary] = ACTIONS(1),
    [sym_octal] = ACTIONS(1),
    [sym_hexidecimal] = ACTIONS(1),
    [sym_time] = ACTIONS(1),
    [sym_date] = ACTIONS(1),
    [anon_sym_DT_POUND] = ACTIONS(1),
    [aux_sym_date_and_time_token1] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_wstring] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(178),
    [sym__definition] = STATE(127),
    [sym_program_definition] = STATE(142),
    [sym_action_definition] = STATE(142),
    [aux_sym_source_file_repeat1] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [anon_sym_ACTION] = ACTIONS(9),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(16), 1,
      anon_sym_IF,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(22), 1,
      anon_sym_FOR,
    ACTIONS(25), 1,
      anon_sym_REPEAT,
    ACTIONS(28), 1,
      anon_sym_WHILE,
    ACTIONS(31), 1,
      aux_sym_case_value_token1,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
    ACTIONS(14), 9,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_END_IF,
      anon_sym_END_CASE,
      anon_sym_END_FOR,
      anon_sym_UNTIL,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
  [63] = 8,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    STATE(11), 1,
      sym_index,
    STATE(14), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(37), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [111] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(46), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(44), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [148] = 14,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(75), 1,
      sym__expression,
    STATE(143), 1,
      sym_parameter_assignment,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [207] = 14,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(64), 1,
      anon_sym_RPAREN,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(76), 1,
      sym__expression,
    STATE(140), 1,
      sym_parameter_assignment,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [266] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(68), 5,
      anon_sym_LPAREN,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [303] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(72), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [339] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(76), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(74), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [375] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(80), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(78), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [411] = 6,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(88), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(86), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [453] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(93), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(91), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [489] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(97), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [525] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(86), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(82), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [561] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [597] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(97), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(95), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [633] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(72), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(70), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [669] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(105), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [705] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(109), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(107), 23,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_OF,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [741] = 13,
    ACTIONS(48), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(86), 1,
      sym__expression,
    STATE(156), 1,
      sym_parameter_assignment,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [797] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(54), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [850] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(115), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [903] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(96), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [956] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(113), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1009] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(107), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1062] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(105), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1115] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(90), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1168] = 18,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(117), 1,
      anon_sym_END_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(127), 1,
      anon_sym_ELSIF,
    ACTIONS(129), 1,
      anon_sym_ELSE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    STATE(176), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(129), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [1233] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(111), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1286] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(49), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1339] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(46), 1,
      sym__expression,
    STATE(48), 1,
      sym_date_and_time,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1392] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(47), 1,
      sym__expression,
    STATE(48), 1,
      sym_date_and_time,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1445] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(55), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1498] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(121), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1551] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(95), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1604] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(109), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1657] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(117), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1710] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(50), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1763] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(85), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1816] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(52), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1869] = 12,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      anon_sym_NOT,
    ACTIONS(62), 1,
      anon_sym_DT_POUND,
    ACTIONS(111), 1,
      sym_identifier,
    STATE(43), 1,
      sym_variable,
    STATE(48), 1,
      sym_date_and_time,
    STATE(84), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(58), 2,
      sym_boolean,
      sym_integer,
    STATE(53), 6,
      sym_parenthesis_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_mask_expression,
      sym__literal,
    ACTIONS(60), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [1922] = 18,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(127), 1,
      anon_sym_ELSIF,
    ACTIONS(129), 1,
      anon_sym_ELSE,
    ACTIONS(131), 1,
      anon_sym_END_IF,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    STATE(172), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(28), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(130), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [1987] = 4,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(135), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2023] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(141), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(139), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2056] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(145), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2089] = 9,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(147), 12,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2134] = 8,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(147), 14,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2177] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(165), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(163), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2210] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(169), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(167), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2243] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(171), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2276] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(175), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(173), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2309] = 6,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(171), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 18,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2348] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(135), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(133), 20,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2381] = 4,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(171), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 19,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2416] = 7,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(171), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(147), 16,
      anon_sym_SEMI,
      anon_sym_THEN,
      anon_sym_DO,
      anon_sym_END_REPEAT,
      anon_sym_COMMA,
      anon_sym_TO,
      anon_sym_BY,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [2457] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(58), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    ACTIONS(177), 3,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2511] = 15,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(179), 1,
      sym_identifier,
    ACTIONS(184), 1,
      aux_sym_case_value_token1,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(182), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2567] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    ACTIONS(186), 3,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2621] = 15,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(193), 1,
      aux_sym_case_value_token1,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(191), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(57), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2677] = 9,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(39), 1,
      anon_sym_DOT,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(195), 1,
      anon_sym_COLON_EQ,
    STATE(11), 1,
      sym_index,
    STATE(14), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(37), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_MOD,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [2721] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(197), 1,
      anon_sym_END_CASE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2773] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(199), 1,
      anon_sym_END_CASE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(61), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2825] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(201), 1,
      anon_sym_UNTIL,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(69), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2877] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(203), 1,
      anon_sym_END_FOR,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(71), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2929] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(205), 1,
      anon_sym_END_ACTION,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(72), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [2981] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(207), 1,
      anon_sym_END_PROGRAM,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3033] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(209), 1,
      anon_sym_END_IF,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3085] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(211), 1,
      anon_sym_END_WHILE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(70), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3137] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(213), 1,
      anon_sym_UNTIL,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3189] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(215), 1,
      anon_sym_END_WHILE,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3241] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(217), 1,
      anon_sym_END_FOR,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3293] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(219), 1,
      anon_sym_END_ACTION,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3345] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(221), 1,
      anon_sym_END_IF,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(67), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3397] = 14,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_IF,
    ACTIONS(119), 1,
      anon_sym_CASE,
    ACTIONS(121), 1,
      anon_sym_FOR,
    ACTIONS(123), 1,
      anon_sym_REPEAT,
    ACTIONS(125), 1,
      anon_sym_WHILE,
    ACTIONS(223), 1,
      anon_sym_END_PROGRAM,
    STATE(157), 1,
      sym_variable,
    STATE(166), 1,
      sym_call_expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(66), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(119), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(104), 3,
      sym_for_statement,
      sym_repeat_statement,
      sym_while_statement,
    STATE(112), 5,
      sym__control_statement,
      sym__loop_statement,
      sym_assignment,
      sym_expression_statement,
      sym_call_statement,
  [3449] = 12,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(153), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [3494] = 12,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(149), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [3539] = 4,
    ACTIONS(235), 1,
      anon_sym_SEMI,
    ACTIONS(237), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(233), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3567] = 4,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(239), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3595] = 4,
    ACTIONS(247), 1,
      anon_sym_SEMI,
    ACTIONS(249), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(245), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3623] = 4,
    ACTIONS(253), 1,
      anon_sym_SEMI,
    ACTIONS(255), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(251), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3651] = 4,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(261), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(257), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3679] = 4,
    ACTIONS(265), 1,
      anon_sym_SEMI,
    ACTIONS(267), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(263), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3707] = 4,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(273), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(269), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3735] = 11,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(275), 1,
      anon_sym_COMMA,
    ACTIONS(277), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [3777] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(279), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [3817] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [3857] = 4,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(287), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(283), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3885] = 4,
    ACTIONS(291), 1,
      anon_sym_SEMI,
    ACTIONS(293), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(289), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3913] = 4,
    ACTIONS(297), 1,
      anon_sym_SEMI,
    ACTIONS(299), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(295), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [3941] = 11,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(301), 1,
      anon_sym_DO,
    ACTIONS(303), 1,
      anon_sym_BY,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [3983] = 4,
    ACTIONS(307), 1,
      anon_sym_SEMI,
    ACTIONS(309), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(305), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4011] = 4,
    ACTIONS(313), 1,
      anon_sym_SEMI,
    ACTIONS(315), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(311), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4039] = 4,
    ACTIONS(319), 1,
      anon_sym_SEMI,
    ACTIONS(321), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(317), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4067] = 3,
    ACTIONS(325), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(323), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4092] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(327), 1,
      anon_sym_DO,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4131] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(329), 1,
      anon_sym_DO,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4170] = 3,
    ACTIONS(333), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(331), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4195] = 3,
    ACTIONS(337), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(335), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4220] = 3,
    ACTIONS(243), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(239), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4245] = 3,
    ACTIONS(321), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(317), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4270] = 3,
    ACTIONS(237), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(233), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4295] = 3,
    ACTIONS(341), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(339), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4320] = 3,
    ACTIONS(345), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(343), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4345] = 3,
    ACTIONS(349), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(347), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4370] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(351), 1,
      anon_sym_TO,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4409] = 3,
    ACTIONS(355), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(353), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4434] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(357), 1,
      anon_sym_END_REPEAT,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4473] = 3,
    ACTIONS(255), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(251), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4498] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(359), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4537] = 3,
    ACTIONS(363), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(361), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4562] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(365), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4601] = 3,
    ACTIONS(369), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(367), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4626] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(371), 1,
      anon_sym_THEN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4665] = 3,
    ACTIONS(273), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(269), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4690] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(373), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4729] = 3,
    ACTIONS(267), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(263), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4754] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(375), 1,
      anon_sym_END_REPEAT,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4793] = 3,
    ACTIONS(379), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(377), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4818] = 3,
    ACTIONS(383), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(381), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4843] = 3,
    ACTIONS(387), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(385), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4868] = 10,
    ACTIONS(151), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_MOD,
    ACTIONS(389), 1,
      anon_sym_THEN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(149), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(153), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(159), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(161), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(229), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [4907] = 3,
    ACTIONS(249), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(245), 15,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_FOR,
      anon_sym_END_FOR,
      anon_sym_REPEAT,
      anon_sym_UNTIL,
      anon_sym_WHILE,
      anon_sym_END_WHILE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [4932] = 9,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(393), 1,
      anon_sym_END_CASE,
    ACTIONS(395), 1,
      anon_sym_ELSE,
    ACTIONS(397), 1,
      aux_sym_case_value_token1,
    STATE(155), 1,
      sym_case_range,
    STATE(163), 1,
      sym_case_value,
    STATE(165), 1,
      sym_else_case,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(124), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [4962] = 9,
    ACTIONS(391), 1,
      sym_identifier,
    ACTIONS(395), 1,
      anon_sym_ELSE,
    ACTIONS(397), 1,
      aux_sym_case_value_token1,
    ACTIONS(399), 1,
      anon_sym_END_CASE,
    STATE(155), 1,
      sym_case_range,
    STATE(163), 1,
      sym_case_value,
    STATE(167), 1,
      sym_else_case,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(126), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [4992] = 7,
    ACTIONS(35), 1,
      anon_sym_LPAREN,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(401), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_structure_member,
    STATE(131), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(33), 3,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
  [5017] = 7,
    ACTIONS(403), 1,
      sym_identifier,
    ACTIONS(408), 1,
      aux_sym_case_value_token1,
    STATE(155), 1,
      sym_case_range,
    STATE(163), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(406), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(126), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [5042] = 6,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(9), 1,
      anon_sym_ACTION,
    ACTIONS(411), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(128), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(142), 2,
      sym_program_definition,
      sym_action_definition,
  [5064] = 6,
    ACTIONS(413), 1,
      ts_builtin_sym_end,
    ACTIONS(415), 1,
      anon_sym_PROGRAM,
    ACTIONS(418), 1,
      anon_sym_ACTION,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(128), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(142), 2,
      sym_program_definition,
      sym_action_definition,
  [5086] = 6,
    ACTIONS(421), 1,
      anon_sym_END_IF,
    ACTIONS(423), 1,
      anon_sym_ELSIF,
    ACTIONS(425), 1,
      anon_sym_ELSE,
    STATE(169), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(133), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [5107] = 6,
    ACTIONS(423), 1,
      anon_sym_ELSIF,
    ACTIONS(425), 1,
      anon_sym_ELSE,
    ACTIONS(427), 1,
      anon_sym_END_IF,
    STATE(176), 1,
      sym_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(133), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [5128] = 5,
    ACTIONS(84), 1,
      anon_sym_LPAREN,
    ACTIONS(401), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(82), 3,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
  [5147] = 6,
    ACTIONS(42), 1,
      anon_sym_LBRACK,
    ACTIONS(401), 1,
      anon_sym_DOT,
    STATE(14), 1,
      sym_structure_member,
    STATE(135), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(33), 2,
      anon_sym_COLON_EQ,
      anon_sym_OF,
  [5168] = 4,
    ACTIONS(431), 1,
      anon_sym_ELSIF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(429), 2,
      anon_sym_END_IF,
      anon_sym_ELSE,
    STATE(133), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [5184] = 5,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(164), 1,
      sym_variable,
    STATE(168), 1,
      sym_statement_initialization,
    STATE(170), 1,
      sym_for_range,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5201] = 4,
    ACTIONS(401), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(82), 2,
      anon_sym_COLON_EQ,
      anon_sym_OF,
  [5216] = 5,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(440), 1,
      anon_sym_DOT_DOT,
    STATE(144), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5233] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5247] = 3,
    STATE(160), 1,
      sym_case_range,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(444), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [5259] = 3,
    ACTIONS(446), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(15), 2,
      sym_call_expression,
      sym_variable,
  [5271] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_RPAREN,
    STATE(147), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5285] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(448), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [5295] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(450), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [5305] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(227), 1,
      anon_sym_RPAREN,
    STATE(137), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5319] = 4,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(452), 1,
      anon_sym_COLON,
    STATE(151), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5333] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(454), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [5343] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(456), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [5353] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5367] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(460), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [5377] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(462), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5391] = 4,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(467), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5405] = 4,
    ACTIONS(469), 1,
      anon_sym_COLON,
    ACTIONS(471), 1,
      anon_sym_COMMA,
    STATE(151), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5419] = 3,
    ACTIONS(474), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(15), 2,
      sym_call_expression,
      sym_variable,
  [5431] = 4,
    ACTIONS(225), 1,
      anon_sym_COMMA,
    ACTIONS(476), 1,
      anon_sym_RPAREN,
    STATE(150), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5445] = 3,
    ACTIONS(440), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(469), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [5457] = 4,
    ACTIONS(436), 1,
      anon_sym_COLON,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    STATE(144), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5471] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(281), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5480] = 3,
    ACTIONS(478), 1,
      anon_sym_COLON_EQ,
    ACTIONS(480), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5491] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(482), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [5500] = 3,
    ACTIONS(434), 1,
      sym_identifier,
    STATE(173), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5511] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(469), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [5520] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(484), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [5529] = 2,
    ACTIONS(486), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5537] = 2,
    ACTIONS(488), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5545] = 2,
    ACTIONS(490), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5553] = 2,
    ACTIONS(492), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5561] = 2,
    ACTIONS(494), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5569] = 2,
    ACTIONS(496), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5577] = 2,
    ACTIONS(498), 1,
      anon_sym_TO,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5585] = 2,
    ACTIONS(500), 1,
      anon_sym_END_IF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5593] = 2,
    ACTIONS(502), 1,
      anon_sym_DO,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5601] = 2,
    ACTIONS(504), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5609] = 2,
    ACTIONS(427), 1,
      anon_sym_END_IF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5617] = 2,
    ACTIONS(506), 1,
      anon_sym_OF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5625] = 2,
    ACTIONS(508), 1,
      aux_sym_date_and_time_token3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5633] = 2,
    ACTIONS(510), 1,
      aux_sym_date_and_time_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5641] = 2,
    ACTIONS(421), 1,
      anon_sym_END_IF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5649] = 2,
    ACTIONS(512), 1,
      aux_sym_mask_expression_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5657] = 2,
    ACTIONS(514), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5665] = 2,
    ACTIONS(516), 1,
      aux_sym_date_and_time_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [5673] = 2,
    ACTIONS(518), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 63,
  [SMALL_STATE(4)] = 111,
  [SMALL_STATE(5)] = 148,
  [SMALL_STATE(6)] = 207,
  [SMALL_STATE(7)] = 266,
  [SMALL_STATE(8)] = 303,
  [SMALL_STATE(9)] = 339,
  [SMALL_STATE(10)] = 375,
  [SMALL_STATE(11)] = 411,
  [SMALL_STATE(12)] = 453,
  [SMALL_STATE(13)] = 489,
  [SMALL_STATE(14)] = 525,
  [SMALL_STATE(15)] = 561,
  [SMALL_STATE(16)] = 597,
  [SMALL_STATE(17)] = 633,
  [SMALL_STATE(18)] = 669,
  [SMALL_STATE(19)] = 705,
  [SMALL_STATE(20)] = 741,
  [SMALL_STATE(21)] = 797,
  [SMALL_STATE(22)] = 850,
  [SMALL_STATE(23)] = 903,
  [SMALL_STATE(24)] = 956,
  [SMALL_STATE(25)] = 1009,
  [SMALL_STATE(26)] = 1062,
  [SMALL_STATE(27)] = 1115,
  [SMALL_STATE(28)] = 1168,
  [SMALL_STATE(29)] = 1233,
  [SMALL_STATE(30)] = 1286,
  [SMALL_STATE(31)] = 1339,
  [SMALL_STATE(32)] = 1392,
  [SMALL_STATE(33)] = 1445,
  [SMALL_STATE(34)] = 1498,
  [SMALL_STATE(35)] = 1551,
  [SMALL_STATE(36)] = 1604,
  [SMALL_STATE(37)] = 1657,
  [SMALL_STATE(38)] = 1710,
  [SMALL_STATE(39)] = 1763,
  [SMALL_STATE(40)] = 1816,
  [SMALL_STATE(41)] = 1869,
  [SMALL_STATE(42)] = 1922,
  [SMALL_STATE(43)] = 1987,
  [SMALL_STATE(44)] = 2023,
  [SMALL_STATE(45)] = 2056,
  [SMALL_STATE(46)] = 2089,
  [SMALL_STATE(47)] = 2134,
  [SMALL_STATE(48)] = 2177,
  [SMALL_STATE(49)] = 2210,
  [SMALL_STATE(50)] = 2243,
  [SMALL_STATE(51)] = 2276,
  [SMALL_STATE(52)] = 2309,
  [SMALL_STATE(53)] = 2348,
  [SMALL_STATE(54)] = 2381,
  [SMALL_STATE(55)] = 2416,
  [SMALL_STATE(56)] = 2457,
  [SMALL_STATE(57)] = 2511,
  [SMALL_STATE(58)] = 2567,
  [SMALL_STATE(59)] = 2621,
  [SMALL_STATE(60)] = 2677,
  [SMALL_STATE(61)] = 2721,
  [SMALL_STATE(62)] = 2773,
  [SMALL_STATE(63)] = 2825,
  [SMALL_STATE(64)] = 2877,
  [SMALL_STATE(65)] = 2929,
  [SMALL_STATE(66)] = 2981,
  [SMALL_STATE(67)] = 3033,
  [SMALL_STATE(68)] = 3085,
  [SMALL_STATE(69)] = 3137,
  [SMALL_STATE(70)] = 3189,
  [SMALL_STATE(71)] = 3241,
  [SMALL_STATE(72)] = 3293,
  [SMALL_STATE(73)] = 3345,
  [SMALL_STATE(74)] = 3397,
  [SMALL_STATE(75)] = 3449,
  [SMALL_STATE(76)] = 3494,
  [SMALL_STATE(77)] = 3539,
  [SMALL_STATE(78)] = 3567,
  [SMALL_STATE(79)] = 3595,
  [SMALL_STATE(80)] = 3623,
  [SMALL_STATE(81)] = 3651,
  [SMALL_STATE(82)] = 3679,
  [SMALL_STATE(83)] = 3707,
  [SMALL_STATE(84)] = 3735,
  [SMALL_STATE(85)] = 3777,
  [SMALL_STATE(86)] = 3817,
  [SMALL_STATE(87)] = 3857,
  [SMALL_STATE(88)] = 3885,
  [SMALL_STATE(89)] = 3913,
  [SMALL_STATE(90)] = 3941,
  [SMALL_STATE(91)] = 3983,
  [SMALL_STATE(92)] = 4011,
  [SMALL_STATE(93)] = 4039,
  [SMALL_STATE(94)] = 4067,
  [SMALL_STATE(95)] = 4092,
  [SMALL_STATE(96)] = 4131,
  [SMALL_STATE(97)] = 4170,
  [SMALL_STATE(98)] = 4195,
  [SMALL_STATE(99)] = 4220,
  [SMALL_STATE(100)] = 4245,
  [SMALL_STATE(101)] = 4270,
  [SMALL_STATE(102)] = 4295,
  [SMALL_STATE(103)] = 4320,
  [SMALL_STATE(104)] = 4345,
  [SMALL_STATE(105)] = 4370,
  [SMALL_STATE(106)] = 4409,
  [SMALL_STATE(107)] = 4434,
  [SMALL_STATE(108)] = 4473,
  [SMALL_STATE(109)] = 4498,
  [SMALL_STATE(110)] = 4537,
  [SMALL_STATE(111)] = 4562,
  [SMALL_STATE(112)] = 4601,
  [SMALL_STATE(113)] = 4626,
  [SMALL_STATE(114)] = 4665,
  [SMALL_STATE(115)] = 4690,
  [SMALL_STATE(116)] = 4729,
  [SMALL_STATE(117)] = 4754,
  [SMALL_STATE(118)] = 4793,
  [SMALL_STATE(119)] = 4818,
  [SMALL_STATE(120)] = 4843,
  [SMALL_STATE(121)] = 4868,
  [SMALL_STATE(122)] = 4907,
  [SMALL_STATE(123)] = 4932,
  [SMALL_STATE(124)] = 4962,
  [SMALL_STATE(125)] = 4992,
  [SMALL_STATE(126)] = 5017,
  [SMALL_STATE(127)] = 5042,
  [SMALL_STATE(128)] = 5064,
  [SMALL_STATE(129)] = 5086,
  [SMALL_STATE(130)] = 5107,
  [SMALL_STATE(131)] = 5128,
  [SMALL_STATE(132)] = 5147,
  [SMALL_STATE(133)] = 5168,
  [SMALL_STATE(134)] = 5184,
  [SMALL_STATE(135)] = 5201,
  [SMALL_STATE(136)] = 5216,
  [SMALL_STATE(137)] = 5233,
  [SMALL_STATE(138)] = 5247,
  [SMALL_STATE(139)] = 5259,
  [SMALL_STATE(140)] = 5271,
  [SMALL_STATE(141)] = 5285,
  [SMALL_STATE(142)] = 5295,
  [SMALL_STATE(143)] = 5305,
  [SMALL_STATE(144)] = 5319,
  [SMALL_STATE(145)] = 5333,
  [SMALL_STATE(146)] = 5343,
  [SMALL_STATE(147)] = 5353,
  [SMALL_STATE(148)] = 5367,
  [SMALL_STATE(149)] = 5377,
  [SMALL_STATE(150)] = 5391,
  [SMALL_STATE(151)] = 5405,
  [SMALL_STATE(152)] = 5419,
  [SMALL_STATE(153)] = 5431,
  [SMALL_STATE(154)] = 5445,
  [SMALL_STATE(155)] = 5457,
  [SMALL_STATE(156)] = 5471,
  [SMALL_STATE(157)] = 5480,
  [SMALL_STATE(158)] = 5491,
  [SMALL_STATE(159)] = 5500,
  [SMALL_STATE(160)] = 5511,
  [SMALL_STATE(161)] = 5520,
  [SMALL_STATE(162)] = 5529,
  [SMALL_STATE(163)] = 5537,
  [SMALL_STATE(164)] = 5545,
  [SMALL_STATE(165)] = 5553,
  [SMALL_STATE(166)] = 5561,
  [SMALL_STATE(167)] = 5569,
  [SMALL_STATE(168)] = 5577,
  [SMALL_STATE(169)] = 5585,
  [SMALL_STATE(170)] = 5593,
  [SMALL_STATE(171)] = 5601,
  [SMALL_STATE(172)] = 5609,
  [SMALL_STATE(173)] = 5617,
  [SMALL_STATE(174)] = 5625,
  [SMALL_STATE(175)] = 5633,
  [SMALL_STATE(176)] = 5641,
  [SMALL_STATE(177)] = 5649,
  [SMALL_STATE(178)] = 5657,
  [SMALL_STATE(179)] = 5665,
  [SMALL_STATE(180)] = 5673,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [11] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(125),
  [14] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(34),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(159),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(134),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(63),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(35),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2), SHIFT(139),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5, .production_id = 18),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5, .production_id = 18),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 9),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 9),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 6, .production_id = 19),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 6, .production_id = 19),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2), SHIFT(139),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, .production_id = 15),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5, .production_id = 15),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, .production_id = 13),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5, .production_id = 13),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_member, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_structure_member, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [121] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [127] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_and_time, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_date_and_time, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_mask_expression, 3),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_mask_expression, 3),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesis_expression, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesis_expression, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_clause, 3, .production_id = 16),
  [179] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 3), SHIFT(125),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_clause, 4, .production_id = 16),
  [188] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 2), SHIFT(125),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [207] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [213] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [215] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [217] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [219] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 1),
  [223] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 6),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 6),
  [239] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 6),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 6),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 5),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 5),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, .production_id = 10),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, .production_id = 10),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 5),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 5),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 5),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 5),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_assignment, 3, .production_id = 11),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2, .production_id = 12),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 4),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 4),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 5),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 5),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 4, .production_id = 7),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 4, .production_id = 7),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range, 3),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 4),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 4),
  [311] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 6),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 6),
  [317] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 5),
  [323] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 6, .production_id = 10),
  [325] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 6, .production_id = 10),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_range, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_statement, 6),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_statement, 6),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [337] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [339] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 5),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 5),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_statement, 2),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_statement, 2),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__loop_statement, 1),
  [349] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__loop_statement, 1),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement_initialization, 3),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 6),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_repeat_statement, 5, .production_id = 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_repeat_statement, 5, .production_id = 7),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_statement, 1),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_statement, 1),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [391] = {.entry = {.count = 1, .reusable = false}}, SHIFT(136),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [395] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [403] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(136),
  [406] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(136),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [415] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(162),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(180),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(24),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 5, .production_id = 3),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 2),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 4, .production_id = 3),
  [456] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [464] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2, .production_id = 14), SHIFT_REPEAT(20),
  [467] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2, .production_id = 14),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2),
  [471] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2), SHIFT_REPEAT(138),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [484] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_range, 3, .production_id = 17),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [512] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [514] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_structured_text(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = (const uint16_t *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
