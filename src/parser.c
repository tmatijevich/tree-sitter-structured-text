#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 82
#define ALIAS_COUNT 1
#define TOKEN_COUNT 64
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 8

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
  anon_sym_FOR = 12,
  anon_sym_DO = 13,
  anon_sym_END_FOR = 14,
  anon_sym_REPEAT = 15,
  anon_sym_UNTIL = 16,
  anon_sym_END_REPEAT = 17,
  anon_sym_WHILE = 18,
  anon_sym_END_WHILE = 19,
  anon_sym_ELSIF = 20,
  anon_sym_ELSE = 21,
  anon_sym_TO = 22,
  anon_sym_BY = 23,
  anon_sym_LPAREN = 24,
  anon_sym_RPAREN = 25,
  anon_sym_NOT = 26,
  anon_sym_PLUS = 27,
  anon_sym_DASH = 28,
  anon_sym_STAR_STAR = 29,
  anon_sym_STAR = 30,
  anon_sym_SLASH = 31,
  anon_sym_MOD = 32,
  anon_sym_LT = 33,
  anon_sym_GT = 34,
  anon_sym_LT_EQ = 35,
  anon_sym_GT_EQ = 36,
  anon_sym_EQ = 37,
  anon_sym_LT_GT = 38,
  anon_sym_AND = 39,
  anon_sym_XOR = 40,
  anon_sym_OR = 41,
  anon_sym_COMMA = 42,
  anon_sym_DOT = 43,
  aux_sym_mask_expression_token1 = 44,
  anon_sym_LBRACK = 45,
  anon_sym_RBRACK = 46,
  sym_boolean = 47,
  sym_integer = 48,
  sym_floating_point = 49,
  sym_binary = 50,
  sym_octal = 51,
  sym_hexidecimal = 52,
  sym_time = 53,
  sym_date = 54,
  sym_time_of_day = 55,
  anon_sym_DT_POUND = 56,
  aux_sym_date_and_time_token1 = 57,
  aux_sym_date_and_time_token2 = 58,
  aux_sym_date_and_time_token3 = 59,
  sym_string = 60,
  sym_wstring = 61,
  sym_inline_comment = 62,
  sym_block_comment = 63,
  sym_source_file = 64,
  sym__definition = 65,
  sym_program_definition = 66,
  sym_action_definition = 67,
  sym_statement = 68,
  sym_assignment = 69,
  sym__expression = 70,
  sym_unary_expression = 71,
  sym_parameter_assignment = 72,
  sym_call_expression = 73,
  sym_variable = 74,
  sym_index = 75,
  sym_structure_member = 76,
  sym__literal = 77,
  sym_date_and_time = 78,
  aux_sym_source_file_repeat1 = 79,
  aux_sym_program_definition_repeat1 = 80,
  aux_sym_call_expression_repeat1 = 81,
  alias_sym_parameter = 82,
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
  [anon_sym_COMMA] = ",",
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
  [sym_assignment] = "assignment",
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
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_assignment] = sym_assignment,
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
  [anon_sym_COMMA] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
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
  field_Dim1 = 2,
  field_Dim2 = 3,
  field_FunctionName = 4,
  field_Name = 5,
  field_ProgramName = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_ActionName] = "ActionName",
  [field_Dim1] = "Dim1",
  [field_Dim2] = "Dim2",
  [field_FunctionName] = "FunctionName",
  [field_Name] = "Name",
  [field_ProgramName] = "ProgramName",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ProgramName, 1},
  [1] =
    {field_Name, 0},
  [2] =
    {field_ActionName, 1},
  [3] =
    {field_Dim1, 1},
  [4] =
    {field_FunctionName, 0},
  [5] =
    {field_Dim1, 1},
    {field_Dim2, 3},
};

static TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [7] = {
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
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '8') ADVANCE(110);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 4:
      if (lookahead == ')') ADVANCE(158);
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(64);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(65);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '_') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(75);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(75);
      if (lookahead == '_') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(84);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(84);
      if (lookahead == '_') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 15:
      if (lookahead == ':') ADVANCE(69);
      END_STATE();
    case 16:
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(137);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(139);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(134);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 35:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (lookahead == 'S' ||
          lookahead == 's') ADVANCE(138);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 42:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 43:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 44:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(46);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(132);
      END_STATE();
    case 47:
      if (lookahead == '_') ADVANCE(47);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(129);
      END_STATE();
    case 48:
      if (lookahead == '_') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(130);
      END_STATE();
    case 49:
      if (lookahead == '_') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 50:
      if (lookahead == '_') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 51:
      if (lookahead == '_') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 52:
      if (lookahead == '_') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == '_') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == '_') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 55:
      if (lookahead == '_') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 57:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(128);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(54);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(154);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(141);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(148);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 76:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(50);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 79:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      END_STATE();
    case 80:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 81:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(13);
      END_STATE();
    case 82:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(53);
      END_STATE();
    case 83:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 84:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 85:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '1') ADVANCE(112);
      if (lookahead == '2') ADVANCE(109);
      if (lookahead == '8') ADVANCE(110);
      if (lookahead == ':') ADVANCE(91);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == '<') ADVANCE(101);
      if (lookahead == '=') ADVANCE(105);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(161);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '.') ADVANCE(108);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '8') ADVANCE(118);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'') ADVANCE(2);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '+') ADVANCE(96);
      if (lookahead == ',') ADVANCE(107);
      if (lookahead == '-') ADVANCE(97);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '1') ADVANCE(120);
      if (lookahead == '2') ADVANCE(117);
      if (lookahead == '8') ADVANCE(118);
      if (lookahead == ':') ADVANCE(17);
      if (lookahead == ';') ADVANCE(93);
      if (lookahead == 'D') ADVANCE(159);
      if (lookahead == 'T') ADVANCE(160);
      if (lookahead == '[') ADVANCE(115);
      if (lookahead == ']') ADVANCE(116);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(153);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(6);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(98);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(157);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(103);
      if (lookahead == '>') ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '6') ADVANCE(111);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(123);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_mask_expression_token1);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(47);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(48);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '#') ADVANCE(49);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '6') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(121);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (lookahead == '_') ADVANCE(122);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(127);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(126);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(127);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_floating_point);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_binary);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_octal);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(130);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_hexidecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_time);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == '-') ADVANCE(136);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 'S') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_time);
      if (lookahead == 's') ADVANCE(132);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_time);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_date);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_date);
      if (lookahead == '_') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '.') ADVANCE(73);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '_') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(142);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == ':') ADVANCE(71);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == ':') ADVANCE(71);
      if (lookahead == '_') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_time_of_day);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_DT_POUND);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(aux_sym_date_and_time_token1);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(aux_sym_date_and_time_token2);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(aux_sym_date_and_time_token2);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == ':') ADVANCE(61);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == ':') ADVANCE(61);
      if (lookahead == '_') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(aux_sym_date_and_time_token3);
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(151);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '\'') ADVANCE(155);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_wstring);
      if (lookahead == '"') ADVANCE(156);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(60);
      if (lookahead == 'T') ADVANCE(162);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(133);
      if (lookahead == 'O') ADVANCE(164);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(133);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(147);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(163);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(165);
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
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == 'E') ADVANCE(4);
      if (lookahead == 'F') ADVANCE(5);
      if (lookahead == 'I') ADVANCE(6);
      if (lookahead == 'M') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(8);
      if (lookahead == 'O') ADVANCE(9);
      if (lookahead == 'P') ADVANCE(10);
      if (lookahead == 'R') ADVANCE(11);
      if (lookahead == 'T') ADVANCE(12);
      if (lookahead == 'U') ADVANCE(13);
      if (lookahead == 'W') ADVANCE(14);
      if (lookahead == 'X') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(17);
      END_STATE();
    case 2:
      if (lookahead == 'Y') ADVANCE(18);
      END_STATE();
    case 3:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 4:
      if (lookahead == 'L') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(21);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(22);
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == 'F') ADVANCE(24);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 9:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 10:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'H') ADVANCE(30);
      if (lookahead == 'O') ADVANCE(31);
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 13:
      if (lookahead == 'N') ADVANCE(33);
      END_STATE();
    case 14:
      if (lookahead == 'H') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'D') ADVANCE(37);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BY);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DO);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'D') ADVANCE(39);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(40);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(41);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 25:
      if (lookahead == 'D') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'T') ADVANCE(43);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(44);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(45);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_TO);
      END_STATE();
    case 32:
      if (lookahead == 'U') ADVANCE(47);
      END_STATE();
    case 33:
      if (lookahead == 'T') ADVANCE(48);
      END_STATE();
    case 34:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'R') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'I') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 38:
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'I') ADVANCE(53);
      END_STATE();
    case 39:
      if (lookahead == '_') ADVANCE(54);
      END_STATE();
    case 40:
      if (lookahead == 'S') ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_FOR);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_MOD);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_NOT);
      END_STATE();
    case 44:
      if (lookahead == 'G') ADVANCE(56);
      END_STATE();
    case 45:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == 'N') ADVANCE(58);
      END_STATE();
    case 47:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 48:
      if (lookahead == 'I') ADVANCE(60);
      END_STATE();
    case 49:
      if (lookahead == 'L') ADVANCE(61);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 51:
      if (lookahead == 'O') ADVANCE(62);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 53:
      if (lookahead == 'F') ADVANCE(63);
      END_STATE();
    case 54:
      if (lookahead == 'A') ADVANCE(64);
      if (lookahead == 'F') ADVANCE(65);
      if (lookahead == 'I') ADVANCE(66);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == 'R') ADVANCE(68);
      if (lookahead == 'W') ADVANCE(69);
      END_STATE();
    case 55:
      if (lookahead == 'E') ADVANCE(59);
      END_STATE();
    case 56:
      if (lookahead == 'R') ADVANCE(70);
      END_STATE();
    case 57:
      if (lookahead == 'A') ADVANCE(71);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_boolean);
      END_STATE();
    case 60:
      if (lookahead == 'L') ADVANCE(72);
      END_STATE();
    case 61:
      if (lookahead == 'E') ADVANCE(73);
      END_STATE();
    case 62:
      if (lookahead == 'N') ADVANCE(74);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_ELSIF);
      END_STATE();
    case 64:
      if (lookahead == 'C') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 'O') ADVANCE(76);
      END_STATE();
    case 66:
      if (lookahead == 'F') ADVANCE(77);
      END_STATE();
    case 67:
      if (lookahead == 'R') ADVANCE(78);
      END_STATE();
    case 68:
      if (lookahead == 'E') ADVANCE(79);
      END_STATE();
    case 69:
      if (lookahead == 'H') ADVANCE(80);
      END_STATE();
    case 70:
      if (lookahead == 'A') ADVANCE(81);
      END_STATE();
    case 71:
      if (lookahead == 'T') ADVANCE(82);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_UNTIL);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_WHILE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_ACTION);
      END_STATE();
    case 75:
      if (lookahead == 'T') ADVANCE(83);
      END_STATE();
    case 76:
      if (lookahead == 'R') ADVANCE(84);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_END_IF);
      END_STATE();
    case 78:
      if (lookahead == 'O') ADVANCE(85);
      END_STATE();
    case 79:
      if (lookahead == 'P') ADVANCE(86);
      END_STATE();
    case 80:
      if (lookahead == 'I') ADVANCE(87);
      END_STATE();
    case 81:
      if (lookahead == 'M') ADVANCE(88);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_REPEAT);
      END_STATE();
    case 83:
      if (lookahead == 'I') ADVANCE(89);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_END_FOR);
      END_STATE();
    case 85:
      if (lookahead == 'G') ADVANCE(90);
      END_STATE();
    case 86:
      if (lookahead == 'E') ADVANCE(91);
      END_STATE();
    case 87:
      if (lookahead == 'L') ADVANCE(92);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 89:
      if (lookahead == 'O') ADVANCE(93);
      END_STATE();
    case 90:
      if (lookahead == 'R') ADVANCE(94);
      END_STATE();
    case 91:
      if (lookahead == 'A') ADVANCE(95);
      END_STATE();
    case 92:
      if (lookahead == 'E') ADVANCE(96);
      END_STATE();
    case 93:
      if (lookahead == 'N') ADVANCE(97);
      END_STATE();
    case 94:
      if (lookahead == 'A') ADVANCE(98);
      END_STATE();
    case 95:
      if (lookahead == 'T') ADVANCE(99);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_END_WHILE);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_END_ACTION);
      END_STATE();
    case 98:
      if (lookahead == 'M') ADVANCE(100);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_END_REPEAT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 87},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 87},
  [6] = {.lex_state = 87},
  [7] = {.lex_state = 87},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 87},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 87},
  [17] = {.lex_state = 87},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 87},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 87},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 87},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 3},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 3},
  [58] = {.lex_state = 87},
  [59] = {.lex_state = 87},
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
    [anon_sym_COMMA] = ACTIONS(1),
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
    [aux_sym_date_and_time_token3] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_wstring] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(58),
    [sym__definition] = STATE(16),
    [sym_program_definition] = STATE(43),
    [sym_action_definition] = STATE(43),
    [aux_sym_source_file_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [anon_sym_ACTION] = ACTIONS(9),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    STATE(33), 1,
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
    STATE(40), 5,
      sym__expression,
      sym_unary_expression,
      sym_parameter_assignment,
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
  [46] = 10,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(25), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
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
    STATE(42), 5,
      sym__expression,
      sym_unary_expression,
      sym_parameter_assignment,
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
  [92] = 9,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    STATE(33), 1,
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
    STATE(49), 5,
      sym__expression,
      sym_unary_expression,
      sym_parameter_assignment,
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
  [135] = 9,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(33), 1,
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
    STATE(47), 4,
      sym__expression,
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
  [177] = 9,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(33), 1,
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
    STATE(48), 4,
      sym__expression,
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
  [219] = 9,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(33), 1,
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
    STATE(52), 4,
      sym__expression,
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
  [261] = 9,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(33), 1,
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
    STATE(31), 4,
      sym__expression,
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
  [303] = 9,
    ACTIONS(15), 1,
      anon_sym_NOT,
    ACTIONS(23), 1,
      anon_sym_DT_POUND,
    ACTIONS(27), 1,
      sym_identifier,
    STATE(33), 1,
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
    STATE(50), 4,
      sym__expression,
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
  [345] = 7,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_index,
    STATE(24), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [372] = 6,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_index,
    STATE(24), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(29), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [396] = 5,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(39), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(37), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [417] = 7,
    ACTIONS(33), 1,
      anon_sym_DOT,
    ACTIONS(35), 1,
      anon_sym_LBRACK,
    ACTIONS(41), 1,
      anon_sym_COLON_EQ,
    STATE(17), 1,
      sym_index,
    STATE(24), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [441] = 3,
    ACTIONS(45), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(43), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [457] = 3,
    ACTIONS(49), 1,
      anon_sym_LPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(47), 6,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_DOT,
      anon_sym_RBRACK,
  [473] = 6,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(9), 1,
      anon_sym_ACTION,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(19), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(43), 2,
      sym_program_definition,
      sym_action_definition,
  [495] = 4,
    ACTIONS(33), 1,
      anon_sym_DOT,
    STATE(25), 1,
      sym_structure_member,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(37), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [513] = 6,
    ACTIONS(53), 1,
      sym_identifier,
    STATE(41), 1,
      sym_assignment,
    STATE(56), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
    STATE(18), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [535] = 6,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    ACTIONS(60), 1,
      anon_sym_PROGRAM,
    ACTIONS(63), 1,
      anon_sym_ACTION,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(19), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
    STATE(43), 2,
      sym_program_definition,
      sym_action_definition,
  [557] = 6,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_END_ACTION,
    STATE(41), 1,
      sym_assignment,
    STATE(56), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(18), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [578] = 6,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(68), 1,
      anon_sym_END_PROGRAM,
    STATE(41), 1,
      sym_assignment,
    STATE(56), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(18), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [599] = 6,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(70), 1,
      anon_sym_END_ACTION,
    STATE(41), 1,
      sym_assignment,
    STATE(56), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(20), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [620] = 6,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(72), 1,
      anon_sym_END_PROGRAM,
    STATE(41), 1,
      sym_assignment,
    STATE(56), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [641] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(37), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [653] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(74), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [665] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(76), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [677] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(78), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [689] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(80), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [701] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(82), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [713] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(84), 5,
      anon_sym_COLON_EQ,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [725] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(86), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [736] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [747] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(90), 4,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [758] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [768] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [778] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [788] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [798] = 3,
    ACTIONS(100), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(26), 2,
      sym_call_expression,
      sym_variable,
  [810] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(102), 3,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      sym_identifier,
  [820] = 4,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(45), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [834] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(108), 3,
      anon_sym_END_PROGRAM,
      anon_sym_END_ACTION,
      sym_identifier,
  [844] = 4,
    ACTIONS(13), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(46), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [858] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
      anon_sym_ACTION,
  [868] = 4,
    ACTIONS(112), 1,
      anon_sym_RPAREN,
    ACTIONS(114), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [882] = 4,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(117), 1,
      anon_sym_RPAREN,
    STATE(44), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [896] = 4,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [910] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [921] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(123), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [930] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(112), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [939] = 2,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [947] = 2,
    ACTIONS(127), 1,
      aux_sym_date_and_time_token3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [955] = 2,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [963] = 2,
    ACTIONS(131), 1,
      aux_sym_date_and_time_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [971] = 2,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [979] = 2,
    ACTIONS(135), 1,
      aux_sym_date_and_time_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [987] = 2,
    ACTIONS(137), 1,
      anon_sym_COLON_EQ,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [995] = 2,
    ACTIONS(139), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1003] = 2,
    ACTIONS(141), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1011] = 2,
    ACTIONS(143), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 46,
  [SMALL_STATE(4)] = 92,
  [SMALL_STATE(5)] = 135,
  [SMALL_STATE(6)] = 177,
  [SMALL_STATE(7)] = 219,
  [SMALL_STATE(8)] = 261,
  [SMALL_STATE(9)] = 303,
  [SMALL_STATE(10)] = 345,
  [SMALL_STATE(11)] = 372,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 441,
  [SMALL_STATE(15)] = 457,
  [SMALL_STATE(16)] = 473,
  [SMALL_STATE(17)] = 495,
  [SMALL_STATE(18)] = 513,
  [SMALL_STATE(19)] = 535,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 578,
  [SMALL_STATE(22)] = 599,
  [SMALL_STATE(23)] = 620,
  [SMALL_STATE(24)] = 641,
  [SMALL_STATE(25)] = 653,
  [SMALL_STATE(26)] = 665,
  [SMALL_STATE(27)] = 677,
  [SMALL_STATE(28)] = 689,
  [SMALL_STATE(29)] = 701,
  [SMALL_STATE(30)] = 713,
  [SMALL_STATE(31)] = 725,
  [SMALL_STATE(32)] = 736,
  [SMALL_STATE(33)] = 747,
  [SMALL_STATE(34)] = 758,
  [SMALL_STATE(35)] = 768,
  [SMALL_STATE(36)] = 778,
  [SMALL_STATE(37)] = 788,
  [SMALL_STATE(38)] = 798,
  [SMALL_STATE(39)] = 810,
  [SMALL_STATE(40)] = 820,
  [SMALL_STATE(41)] = 834,
  [SMALL_STATE(42)] = 844,
  [SMALL_STATE(43)] = 858,
  [SMALL_STATE(44)] = 868,
  [SMALL_STATE(45)] = 882,
  [SMALL_STATE(46)] = 896,
  [SMALL_STATE(47)] = 910,
  [SMALL_STATE(48)] = 921,
  [SMALL_STATE(49)] = 930,
  [SMALL_STATE(50)] = 939,
  [SMALL_STATE(51)] = 947,
  [SMALL_STATE(52)] = 955,
  [SMALL_STATE(53)] = 963,
  [SMALL_STATE(54)] = 971,
  [SMALL_STATE(55)] = 979,
  [SMALL_STATE(56)] = 987,
  [SMALL_STATE(57)] = 995,
  [SMALL_STATE(58)] = 1003,
  [SMALL_STATE(59)] = 1011,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3, .production_id = 4),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3, .production_id = 4),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 5, .production_id = 6),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 5, .production_id = 6),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(11),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_structure_member, 2),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 5),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 6, .production_id = 5),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, .production_id = 5),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_date_and_time, 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 5, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_action_definition, 4, .production_id = 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [114] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_assignment, 3, .production_id = 7),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [141] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
