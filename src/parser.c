#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 89
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 95
#define ALIAS_COUNT 1
#define TOKEN_COUNT 69
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

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
  sym_assignment = 75,
  sym_case_statement = 76,
  sym_case = 77,
  sym_else_case = 78,
  sym_case_value = 79,
  sym_case_range = 80,
  sym__expression = 81,
  sym_unary_expression = 82,
  sym_parameter_assignment = 83,
  sym_call_expression = 84,
  sym_variable = 85,
  sym_index = 86,
  sym_structure_member = 87,
  sym__literal = 88,
  sym_date_and_time = 89,
  aux_sym_source_file_repeat1 = 90,
  aux_sym_program_definition_repeat1 = 91,
  aux_sym_case_statement_repeat1 = 92,
  aux_sym_case_value_repeat1 = 93,
  aux_sym_call_expression_repeat1 = 94,
  alias_sym_parameter = 95,
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
  [aux_sym_case_value_token1] = "case_value_token1",
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
  [sym_assignment] = "assignment",
  [sym_case_statement] = "case_statement",
  [sym_case] = "case",
  [sym_else_case] = "else_case",
  [sym_case_value] = "case_value",
  [sym_case_range] = "case_range",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_parameter_assignment] = "parameter_assignment",
  [sym_call_expression] = "call_expression",
  [sym_variable] = "variable",
  [sym_index] = "index",
  [sym_structure_member] = "structure_member",
  [sym__literal] = "_literal",
  [sym_date_and_time] = "date_and_time",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
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
  [aux_sym_case_value_token1] = aux_sym_case_value_token1,
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
  [sym_assignment] = sym_assignment,
  [sym_case_statement] = sym_case_statement,
  [sym_case] = sym_case,
  [sym_else_case] = sym_else_case,
  [sym_case_value] = sym_case_value,
  [sym_case_range] = sym_case_range,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_parameter_assignment] = sym_parameter_assignment,
  [sym_call_expression] = sym_call_expression,
  [sym_variable] = sym_variable,
  [sym_index] = sym_index,
  [sym_structure_member] = sym_structure_member,
  [sym__literal] = sym__literal,
  [sym_date_and_time] = sym_date_and_time,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
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
    .visible = false,
    .named = false,
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_unary_expression] = {
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
  field_ProgramName = 2,
  field_caseControlValue = 3,
  field_dim1 = 4,
  field_dim2 = 5,
  field_functionName = 6,
  field_lowerBound = 7,
  field_name = 8,
  field_upperBound = 9,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_ActionName] = "ActionName",
  [field_ProgramName] = "ProgramName",
  [field_caseControlValue] = "caseControlValue",
  [field_dim1] = "dim1",
  [field_dim2] = "dim2",
  [field_functionName] = "functionName",
  [field_lowerBound] = "lowerBound",
  [field_name] = "name",
  [field_upperBound] = "upperBound",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
  [7] = {.index = 6, .length = 2},
  [8] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ProgramName, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_ActionName, 1},
  [3] =
    {field_caseControlValue, 1},
  [4] =
    {field_dim1, 1},
  [5] =
    {field_functionName, 0},
  [6] =
    {field_lowerBound, 0},
    {field_upperBound, 2},
  [8] =
    {field_dim1, 1},
    {field_dim2, 3},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
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
      if (eof) ADVANCE(92);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '8') ADVANCE(116);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '[') ADVANCE(121);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(93);
      if (lookahead == ';') ADVANCE(96);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 4:
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(57);
      END_STATE();
    case 5:
      if (lookahead == ')') ADVANCE(164);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(5);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(63);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(64);
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(78);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(78);
      if (lookahead == '_') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == '-') ADVANCE(87);
      if (lookahead == '_') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 16:
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 17:
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 18:
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(159);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(143);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(145);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(140);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 47:
      if (lookahead == 'M') ADVANCE(48);
      if (lookahead == 'm') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(138);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(135);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(136);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 57:
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(138);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(134);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(147);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(160);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(156);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 86:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 87:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 88:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 89:
      if (eof) ADVANCE(92);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(15);
      if (lookahead == '/') ADVANCE(106);
      if (lookahead == '1') ADVANCE(118);
      if (lookahead == '2') ADVANCE(115);
      if (lookahead == '8') ADVANCE(116);
      if (lookahead == ':') ADVANCE(94);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == '<') ADVANCE(107);
      if (lookahead == '=') ADVANCE(111);
      if (lookahead == '>') ADVANCE(108);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(167);
      if (lookahead == '[') ADVANCE(121);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(89)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 90:
      if (eof) ADVANCE(92);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '.') ADVANCE(113);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '[') ADVANCE(121);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 91:
      if (eof) ADVANCE(92);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(100);
      if (lookahead == ')') ADVANCE(101);
      if (lookahead == '+') ADVANCE(102);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '1') ADVANCE(126);
      if (lookahead == '2') ADVANCE(123);
      if (lookahead == '8') ADVANCE(124);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(165);
      if (lookahead == 'T') ADVANCE(166);
      if (lookahead == '[') ADVANCE(121);
      if (lookahead == ']') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(91)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(95);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_case_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(7);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(104);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(163);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(109);
      if (lookahead == '>') ADVANCE(112);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(110);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '6') ADVANCE(117);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(129);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(50);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(51);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '6') ADVANCE(125);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(132);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (lookahead == '_') ADVANCE(128);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(130);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(132);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(133);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_hexidecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '-') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'S') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(47);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '_') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '.') ADVANCE(75);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == ':') ADVANCE(73);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == ':') ADVANCE(73);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '_') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_DT_POUND);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_date_and_time_token1);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(aux_sym_date_and_time_token2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(aux_sym_date_and_time_token2);
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == ':') ADVANCE(67);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == ':') ADVANCE(67);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_wstring);
      if (lookahead == '"') ADVANCE(162);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(61);
      if (lookahead == 'T') ADVANCE(168);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(139);
      if (lookahead == 'O') ADVANCE(170);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(153);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(171);
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
  [1] = {.lex_state = 90},
  [2] = {.lex_state = 90},
  [3] = {.lex_state = 90},
  [4] = {.lex_state = 90},
  [5] = {.lex_state = 90},
  [6] = {.lex_state = 90},
  [7] = {.lex_state = 90},
  [8] = {.lex_state = 90},
  [9] = {.lex_state = 90},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 90},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 90},
  [15] = {.lex_state = 90},
  [16] = {.lex_state = 90},
  [17] = {.lex_state = 90},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 90},
  [20] = {.lex_state = 90},
  [21] = {.lex_state = 90},
  [22] = {.lex_state = 90},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 90},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 90},
  [27] = {.lex_state = 90},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 90},
  [33] = {.lex_state = 90},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 90},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 90},
  [41] = {.lex_state = 90},
  [42] = {.lex_state = 90},
  [43] = {.lex_state = 90},
  [44] = {.lex_state = 90},
  [45] = {.lex_state = 90},
  [46] = {.lex_state = 90},
  [47] = {.lex_state = 90},
  [48] = {.lex_state = 90},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 90},
  [51] = {.lex_state = 90},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 90},
  [54] = {.lex_state = 90},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 90},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 90},
  [59] = {.lex_state = 90},
  [60] = {.lex_state = 90},
  [61] = {.lex_state = 90},
  [62] = {.lex_state = 90},
  [63] = {.lex_state = 90},
  [64] = {.lex_state = 90},
  [65] = {.lex_state = 90},
  [66] = {.lex_state = 3},
  [67] = {.lex_state = 3},
  [68] = {.lex_state = 90},
  [69] = {.lex_state = 3},
  [70] = {.lex_state = 3},
  [71] = {.lex_state = 90},
  [72] = {.lex_state = 90},
  [73] = {.lex_state = 90},
  [74] = {.lex_state = 3},
  [75] = {.lex_state = 90},
  [76] = {.lex_state = 4},
  [77] = {.lex_state = 90},
  [78] = {.lex_state = 90},
  [79] = {.lex_state = 90},
  [80] = {.lex_state = 90},
  [81] = {.lex_state = 90},
  [82] = {.lex_state = 4},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 3},
  [85] = {.lex_state = 90},
  [86] = {.lex_state = 90},
  [87] = {.lex_state = 90},
  [88] = {.lex_state = 90},
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
    [sym_floating_point] = ACTIONS(1),
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
    [sym_source_file] = STATE(86),
    [sym__definition] = STATE(33),
    [sym_program_definition] = STATE(58),
    [sym_action_definition] = STATE(58),
    [aux_sym_source_file_repeat1] = STATE(33),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [anon_sym_ACTION] = ACTIONS(9),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    STATE(47), 1,
      sym_date_and_time,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(64), 2,
      sym__expression,
      sym_parameter_assignment,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [48] = 11,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(47), 1,
      sym_date_and_time,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(59), 2,
      sym__expression,
      sym_parameter_assignment,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [96] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    STATE(47), 1,
      sym_date_and_time,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(73), 2,
      sym__expression,
      sym_parameter_assignment,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [141] = 10,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(47), 1,
      sym_date_and_time,
    STATE(68), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [185] = 10,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(47), 1,
      sym_date_and_time,
    STATE(85), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [229] = 10,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(47), 1,
      sym_date_and_time,
    STATE(51), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [273] = 10,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(47), 1,
      sym_date_and_time,
    STATE(71), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [317] = 10,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(47), 1,
      sym_date_and_time,
    STATE(77), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_boolean,
      sym_integer,
    STATE(48), 3,
      sym_unary_expression,
      sym_variable,
      sym__literal,
    ACTIONS(21), 9,
      sym_floating_point,
      sym_binary,
      sym_octal,
      sym_hexidecimal,
      sym_time,
      sym_date,
      sym_time_of_day,
      sym_string,
      sym_wstring,
  [361] = 9,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(34), 1,
      anon_sym_CASE,
    ACTIONS(37), 1,
      aux_sym_case_value_token1,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(32), 4,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_END_CASE,
      anon_sym_ELSE,
  [395] = 9,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(46), 1,
      aux_sym_case_value_token1,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(44), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(13), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [427] = 7,
    ACTIONS(50), 1,
      anon_sym_LPAREN,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_index,
    STATE(45), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(48), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [455] = 9,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(56), 1,
      sym_identifier,
    ACTIONS(61), 1,
      aux_sym_case_value_token1,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(59), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(10), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [487] = 6,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_index,
    STATE(45), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(48), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [512] = 8,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(63), 1,
      anon_sym_END_CASE,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [540] = 8,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(65), 1,
      anon_sym_END_PROGRAM,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(19), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [568] = 5,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(69), 1,
      anon_sym_LPAREN,
    STATE(41), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(67), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [590] = 9,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_END_CASE,
    ACTIONS(75), 1,
      anon_sym_ELSE,
    ACTIONS(77), 1,
      aux_sym_case_value_token1,
    STATE(52), 1,
      sym_case_range,
    STATE(80), 1,
      sym_else_case,
    STATE(84), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(30), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [620] = 8,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(79), 1,
      anon_sym_END_PROGRAM,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [648] = 8,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(81), 1,
      anon_sym_END_ACTION,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [676] = 8,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(83), 1,
      anon_sym_END_CASE,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [704] = 8,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    ACTIONS(85), 1,
      anon_sym_END_ACTION,
    STATE(37), 1,
      sym_case_statement,
    STATE(79), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(38), 2,
      sym__control_statement,
      sym_assignment,
  [732] = 9,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_ELSE,
    ACTIONS(77), 1,
      aux_sym_case_value_token1,
    ACTIONS(87), 1,
      anon_sym_END_CASE,
    STATE(52), 1,
      sym_case_range,
    STATE(81), 1,
      sym_else_case,
    STATE(84), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(18), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [762] = 3,
    ACTIONS(91), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 7,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [779] = 4,
    ACTIONS(95), 1,
      anon_sym_SEMI,
    ACTIONS(97), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(93), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [798] = 4,
    ACTIONS(52), 1,
      anon_sym_DOT,
    STATE(41), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(67), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [817] = 3,
    ACTIONS(101), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(99), 7,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [834] = 4,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(107), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(103), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [853] = 4,
    ACTIONS(111), 1,
      anon_sym_SEMI,
    ACTIONS(113), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(109), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [872] = 7,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(120), 1,
      aux_sym_case_value_token1,
    STATE(52), 1,
      sym_case_range,
    STATE(84), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(118), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(30), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [897] = 3,
    ACTIONS(97), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(93), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [913] = 7,
    ACTIONS(52), 1,
      anon_sym_DOT,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      anon_sym_COLON_EQ,
    STATE(26), 1,
      sym_index,
    STATE(45), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(48), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [937] = 6,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(9), 1,
      anon_sym_ACTION,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(58), 2,
      sym_program_definition,
      sym_action_definition,
  [959] = 3,
    ACTIONS(107), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(103), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [975] = 6,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
    ACTIONS(129), 1,
      anon_sym_PROGRAM,
    ACTIONS(132), 1,
      anon_sym_ACTION,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(35), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(58), 2,
      sym_program_definition,
      sym_action_definition,
  [997] = 3,
    ACTIONS(137), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(135), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [1013] = 3,
    ACTIONS(141), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(139), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [1029] = 3,
    ACTIONS(145), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(143), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [1045] = 3,
    ACTIONS(149), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(147), 6,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [1061] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(151), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1074] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(153), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1087] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(155), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1100] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(157), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1113] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(159), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1126] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(67), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1139] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(161), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1152] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(163), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1163] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(165), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1174] = 5,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    STATE(57), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1191] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(173), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1202] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(175), 4,
      anon_sym_SEMI,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [1213] = 4,
    ACTIONS(167), 1,
      anon_sym_COLON,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1227] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(177), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [1237] = 4,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(181), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1251] = 3,
    STATE(69), 1,
      sym_case_range,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(183), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [1263] = 4,
    ACTIONS(185), 1,
      anon_sym_COMMA,
    ACTIONS(188), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1277] = 4,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    ACTIONS(190), 1,
      anon_sym_COLON,
    STATE(66), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1291] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(192), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [1301] = 4,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(54), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1315] = 4,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
    STATE(56), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1329] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(196), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [1339] = 3,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(43), 2,
      sym_call_expression,
      sym_variable,
  [1351] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(200), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [1361] = 4,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    ACTIONS(179), 1,
      anon_sym_COMMA,
    STATE(60), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1375] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(202), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [1385] = 4,
    ACTIONS(204), 1,
      anon_sym_COLON,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    STATE(66), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1399] = 3,
    ACTIONS(171), 1,
      anon_sym_DOT_DOT,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(204), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1411] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1420] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(204), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1429] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(211), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1438] = 3,
    ACTIONS(213), 1,
      anon_sym_COMMA,
    ACTIONS(215), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1449] = 3,
    ACTIONS(217), 1,
      sym_identifier,
    STATE(78), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1460] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(188), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1469] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(219), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [1478] = 2,
    ACTIONS(221), 1,
      aux_sym_date_and_time_token3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1486] = 2,
    ACTIONS(223), 1,
      aux_sym_date_and_time_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1494] = 2,
    ACTIONS(225), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1502] = 2,
    ACTIONS(227), 1,
      anon_sym_OF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1510] = 2,
    ACTIONS(229), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1518] = 2,
    ACTIONS(231), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1526] = 2,
    ACTIONS(233), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1534] = 2,
    ACTIONS(235), 1,
      aux_sym_date_and_time_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1542] = 2,
    ACTIONS(237), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1550] = 2,
    ACTIONS(239), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1558] = 2,
    ACTIONS(241), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1566] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1574] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1582] = 2,
    ACTIONS(247), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 141,
  [SMALL_STATE(6)] = 185,
  [SMALL_STATE(7)] = 229,
  [SMALL_STATE(8)] = 273,
  [SMALL_STATE(9)] = 317,
  [SMALL_STATE(10)] = 361,
  [SMALL_STATE(11)] = 395,
  [SMALL_STATE(12)] = 427,
  [SMALL_STATE(13)] = 455,
  [SMALL_STATE(14)] = 487,
  [SMALL_STATE(15)] = 512,
  [SMALL_STATE(16)] = 540,
  [SMALL_STATE(17)] = 568,
  [SMALL_STATE(18)] = 590,
  [SMALL_STATE(19)] = 620,
  [SMALL_STATE(20)] = 648,
  [SMALL_STATE(21)] = 676,
  [SMALL_STATE(22)] = 704,
  [SMALL_STATE(23)] = 732,
  [SMALL_STATE(24)] = 762,
  [SMALL_STATE(25)] = 779,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 817,
  [SMALL_STATE(28)] = 834,
  [SMALL_STATE(29)] = 853,
  [SMALL_STATE(30)] = 872,
  [SMALL_STATE(31)] = 897,
  [SMALL_STATE(32)] = 913,
  [SMALL_STATE(33)] = 937,
  [SMALL_STATE(34)] = 959,
  [SMALL_STATE(35)] = 975,
  [SMALL_STATE(36)] = 997,
  [SMALL_STATE(37)] = 1013,
  [SMALL_STATE(38)] = 1029,
  [SMALL_STATE(39)] = 1045,
  [SMALL_STATE(40)] = 1061,
  [SMALL_STATE(41)] = 1074,
  [SMALL_STATE(42)] = 1087,
  [SMALL_STATE(43)] = 1100,
  [SMALL_STATE(44)] = 1113,
  [SMALL_STATE(45)] = 1126,
  [SMALL_STATE(46)] = 1139,
  [SMALL_STATE(47)] = 1152,
  [SMALL_STATE(48)] = 1163,
  [SMALL_STATE(49)] = 1174,
  [SMALL_STATE(50)] = 1191,
  [SMALL_STATE(51)] = 1202,
  [SMALL_STATE(52)] = 1213,
  [SMALL_STATE(53)] = 1227,
  [SMALL_STATE(54)] = 1237,
  [SMALL_STATE(55)] = 1251,
  [SMALL_STATE(56)] = 1263,
  [SMALL_STATE(57)] = 1277,
  [SMALL_STATE(58)] = 1291,
  [SMALL_STATE(59)] = 1301,
  [SMALL_STATE(60)] = 1315,
  [SMALL_STATE(61)] = 1329,
  [SMALL_STATE(62)] = 1339,
  [SMALL_STATE(63)] = 1351,
  [SMALL_STATE(64)] = 1361,
  [SMALL_STATE(65)] = 1375,
  [SMALL_STATE(66)] = 1385,
  [SMALL_STATE(67)] = 1399,
  [SMALL_STATE(68)] = 1411,
  [SMALL_STATE(69)] = 1420,
  [SMALL_STATE(70)] = 1429,
  [SMALL_STATE(71)] = 1438,
  [SMALL_STATE(72)] = 1449,
  [SMALL_STATE(73)] = 1460,
  [SMALL_STATE(74)] = 1469,
  [SMALL_STATE(75)] = 1478,
  [SMALL_STATE(76)] = 1486,
  [SMALL_STATE(77)] = 1494,
  [SMALL_STATE(78)] = 1502,
  [SMALL_STATE(79)] = 1510,
  [SMALL_STATE(80)] = 1518,
  [SMALL_STATE(81)] = 1526,
  [SMALL_STATE(82)] = 1534,
  [SMALL_STATE(83)] = 1542,
  [SMALL_STATE(84)] = 1550,
  [SMALL_STATE(85)] = 1558,
  [SMALL_STATE(86)] = 1566,
  [SMALL_STATE(87)] = 1574,
  [SMALL_STATE(88)] = 1582,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(72),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 2), SHIFT(14),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 3), SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 5),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 5),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5, .production_id = 8),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5, .production_id = 8),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 4),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 4),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 4),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(49),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(49),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(88),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 4),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_statement, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 6),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_member, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 6, .production_id = 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, .production_id = 6),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_and_time, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [185] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 5, .production_id = 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 4, .production_id = 3),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2), SHIFT_REPEAT(55),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_assignment, 3, .production_id = 9),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_range, 3, .production_id = 7),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [243] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
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
