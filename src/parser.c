#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
  anon_sym_PROGRAM = 2,
  anon_sym_END_PROGRAM = 3,
  anon_sym_IF = 4,
  anon_sym_THEN = 5,
  anon_sym_ELSIF = 6,
  anon_sym_ELSE = 7,
  anon_sym_END_IF = 8,
  anon_sym_SEMI = 9,
  anon_sym_CASE = 10,
  anon_sym_OF = 11,
  anon_sym_END_CASE = 12,
  anon_sym_EQ = 13,
  anon_sym_ACCESS = 14,
  anon_sym_COLON = 15,
  aux_sym_case_value_token1 = 16,
  aux_sym_case_value_token2 = 17,
  anon_sym_COMMA = 18,
  anon_sym_LPAREN = 19,
  anon_sym_RPAREN = 20,
  aux_sym_unary_expression_token1 = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR_STAR = 23,
  anon_sym_STAR = 24,
  anon_sym_SLASH = 25,
  anon_sym_PLUS = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  anon_sym_LT_EQ = 29,
  anon_sym_GT_EQ = 30,
  anon_sym_LT_GT = 31,
  anon_sym_AND = 32,
  anon_sym_XOR = 33,
  anon_sym_OR = 34,
  anon_sym_LBRACK = 35,
  anon_sym_RBRACK = 36,
  anon_sym_DOT = 37,
  aux_sym_dot_operator_token1 = 38,
  sym_number = 39,
  sym_inline_comment = 40,
  sym_block_comment = 41,
  sym_source_file = 42,
  sym__definition = 43,
  sym_program_definition = 44,
  sym_statement = 45,
  sym__control_statement = 46,
  sym_case_statement = 47,
  sym_assignment = 48,
  sym_case_body = 49,
  sym_case_else_clause = 50,
  sym_case_value = 51,
  sym__expression = 52,
  sym_unary_expression = 53,
  sym_binary_expression = 54,
  sym_variable = 55,
  sym__literal = 56,
  aux_sym_source_file_repeat1 = 57,
  aux_sym_program_definition_repeat1 = 58,
  aux_sym_case_body_repeat1 = 59,
  aux_sym_case_body_repeat2 = 60,
  aux_sym_case_value_repeat1 = 61,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_END_PROGRAM] = "END_PROGRAM",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_ELSIF] = "ELSIF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_END_IF] = "END_IF",
  [anon_sym_SEMI] = ";",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_EQ] = "=",
  [anon_sym_ACCESS] = "ACCESS",
  [anon_sym_COLON] = ":",
  [aux_sym_case_value_token1] = "case_value_token1",
  [aux_sym_case_value_token2] = "case_value_token2",
  [anon_sym_COMMA] = ",",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [aux_sym_unary_expression_token1] = "unary_expression_token1",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR_STAR] = "**",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PLUS] = "+",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_AND] = "AND",
  [anon_sym_XOR] = "XOR",
  [anon_sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [aux_sym_dot_operator_token1] = "dot_operator_token1",
  [sym_number] = "number",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_program_definition] = "program_definition",
  [sym_statement] = "statement",
  [sym__control_statement] = "_control_statement",
  [sym_case_statement] = "case_statement",
  [sym_assignment] = "assignment",
  [sym_case_body] = "case_body",
  [sym_case_else_clause] = "case_else_clause",
  [sym_case_value] = "case_value",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_variable] = "variable",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [aux_sym_case_body_repeat1] = "case_body_repeat1",
  [aux_sym_case_body_repeat2] = "case_body_repeat2",
  [aux_sym_case_value_repeat1] = "case_value_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_END_PROGRAM] = anon_sym_END_PROGRAM,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_ELSIF] = anon_sym_ELSIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_END_IF] = anon_sym_END_IF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_END_CASE] = anon_sym_END_CASE,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_ACCESS] = anon_sym_ACCESS,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_case_value_token1] = aux_sym_case_value_token1,
  [aux_sym_case_value_token2] = aux_sym_case_value_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_unary_expression_token1] = aux_sym_unary_expression_token1,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR_STAR] = anon_sym_STAR_STAR,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_dot_operator_token1] = aux_sym_dot_operator_token1,
  [sym_number] = sym_number,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_program_definition] = sym_program_definition,
  [sym_statement] = sym_statement,
  [sym__control_statement] = sym__control_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_assignment] = sym_assignment,
  [sym_case_body] = sym_case_body,
  [sym_case_else_clause] = sym_case_else_clause,
  [sym_case_value] = sym_case_value,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_variable] = sym_variable,
  [sym__literal] = sym__literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
  [aux_sym_case_body_repeat1] = aux_sym_case_body_repeat1,
  [aux_sym_case_body_repeat2] = aux_sym_case_body_repeat2,
  [aux_sym_case_value_repeat1] = aux_sym_case_value_repeat1,
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
  [anon_sym_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_THEN] = {
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
  [anon_sym_END_IF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_case_value_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [aux_sym_unary_expression_token1] = {
    .visible = false,
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
  [anon_sym_PLUS] = {
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
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_dot_operator_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
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
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_case_body] = {
    .visible = true,
    .named = true,
  },
  [sym_case_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_case_value] = {
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
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
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
  [aux_sym_case_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_body_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_value_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_CaseControlValue = 1,
  field_name = 2,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_CaseControlValue] = "CaseControlValue",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_CaseControlValue, 1},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == ',') ADVANCE(21);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ':') ADVANCE(18);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '[') ADVANCE(36);
      if (lookahead == ']') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == '+') ADVANCE(10);
      if (lookahead == '-') ADVANCE(26);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 8:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(20);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == '*') ADVANCE(28);
      if (lookahead == '+') ADVANCE(30);
      if (lookahead == '-') ADVANCE(25);
      if (lookahead == '/') ADVANCE(29);
      if (lookahead == ';') ADVANCE(16);
      if (lookahead == '<') ADVANCE(31);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_case_value_token1);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_case_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead == '>') ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(41);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(42);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(49);
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
      if (lookahead == 'C') ADVANCE(2);
      if (lookahead == 'E') ADVANCE(3);
      if (lookahead == 'I') ADVANCE(4);
      if (lookahead == 'O') ADVANCE(5);
      if (lookahead == 'P') ADVANCE(6);
      if (lookahead == 'T') ADVANCE(7);
      if (lookahead == 'X') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(9);
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(11);
      END_STATE();
    case 3:
      if (lookahead == 'L') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 6:
      if (lookahead == 'R') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'H') ADVANCE(18);
      END_STATE();
    case 8:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(20);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 12:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(24);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 17:
      if (lookahead == 'O') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(26);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(27);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(28);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(29);
      END_STATE();
    case 23:
      if (lookahead == 'E') ADVANCE(30);
      if (lookahead == 'I') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == '_') ADVANCE(32);
      END_STATE();
    case 25:
      if (lookahead == 'G') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'N') ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 28:
      if (lookahead == 'S') ADVANCE(35);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 31:
      if (lookahead == 'F') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'C') ADVANCE(37);
      if (lookahead == 'I') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(40);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(41);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_ELSIF);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 38:
      if (lookahead == 'F') ADVANCE(43);
      END_STATE();
    case 39:
      if (lookahead == 'R') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 'A') ADVANCE(45);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 42:
      if (lookahead == 'S') ADVANCE(46);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_END_IF);
      END_STATE();
    case 44:
      if (lookahead == 'O') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'M') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'E') ADVANCE(49);
      END_STATE();
    case 47:
      if (lookahead == 'G') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'A') ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'M') ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 14},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 14},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 14},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 14},
  [40] = {.lex_state = 14},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 14},
  [43] = {.lex_state = 14},
  [44] = {.lex_state = 14},
  [45] = {.lex_state = 14},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 14},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 14},
  [52] = {.lex_state = 14},
  [53] = {.lex_state = 14},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 14},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 14},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 14},
  [60] = {.lex_state = 14},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_END_PROGRAM] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_ELSIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_END_CASE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_ACCESS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_unary_expression_token1] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR_STAR] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_dot_operator_token1] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__definition] = STATE(39),
    [sym_program_definition] = STATE(52),
    [aux_sym_source_file_repeat1] = STATE(39),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(11), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 14,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_ACCESS,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [27] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(15), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(13), 13,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [53] = 8,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(19), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(17), 6,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [89] = 6,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 10,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [121] = 4,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(31), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 12,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [149] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(31), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 13,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [175] = 5,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(31), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 12,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [205] = 7,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(17), 8,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [239] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(35), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 13,
      anon_sym_SEMI,
      anon_sym_OF,
      anon_sym_EQ,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [265] = 9,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(37), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(19), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [301] = 9,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(19), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [337] = 9,
    ACTIONS(23), 1,
      anon_sym_STAR_STAR,
    ACTIONS(43), 1,
      anon_sym_OF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(19), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(21), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(25), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(27), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(39), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [373] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(53), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(3), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [400] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(4), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [427] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(57), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(13), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [454] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(5), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [481] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(61), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(6), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [508] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(63), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(12), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [535] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(65), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(11), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [562] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(67), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(7), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [589] = 8,
    ACTIONS(69), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_CASE,
    STATE(42), 1,
      sym_case_statement,
    STATE(53), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      anon_sym_END_PROGRAM,
      anon_sym_END_CASE,
    STATE(22), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(45), 2,
      sym__control_statement,
      sym_assignment,
  [618] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(77), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(8), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [645] = 7,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(79), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(9), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [672] = 8,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_CASE,
    ACTIONS(83), 1,
      anon_sym_END_CASE,
    STATE(42), 1,
      sym_case_statement,
    STATE(53), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(26), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(45), 2,
      sym__control_statement,
      sym_assignment,
  [700] = 8,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_CASE,
    ACTIONS(85), 1,
      anon_sym_END_CASE,
    STATE(42), 1,
      sym_case_statement,
    STATE(53), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(45), 2,
      sym__control_statement,
      sym_assignment,
  [728] = 8,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_CASE,
    ACTIONS(87), 1,
      anon_sym_END_PROGRAM,
    STATE(42), 1,
      sym_case_statement,
    STATE(53), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(45), 2,
      sym__control_statement,
      sym_assignment,
  [756] = 8,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(81), 1,
      anon_sym_CASE,
    ACTIONS(89), 1,
      anon_sym_END_PROGRAM,
    STATE(42), 1,
      sym_case_statement,
    STATE(53), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(27), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(45), 2,
      sym__control_statement,
      sym_assignment,
  [784] = 9,
    ACTIONS(93), 1,
      anon_sym_ELSE,
    ACTIONS(95), 1,
      anon_sym_END_CASE,
    ACTIONS(97), 1,
      aux_sym_case_value_token2,
    STATE(30), 1,
      aux_sym_case_body_repeat2,
    STATE(49), 1,
      sym_case_body,
    STATE(58), 1,
      sym_case_value,
    STATE(59), 1,
      sym_case_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(91), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [814] = 6,
    ACTIONS(97), 1,
      aux_sym_case_value_token2,
    STATE(31), 1,
      aux_sym_case_body_repeat2,
    STATE(58), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(91), 2,
      aux_sym_case_value_token1,
      sym_identifier,
    ACTIONS(99), 2,
      anon_sym_ELSE,
      anon_sym_END_CASE,
  [836] = 6,
    ACTIONS(106), 1,
      aux_sym_case_value_token2,
    STATE(31), 1,
      aux_sym_case_body_repeat2,
    STATE(58), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(101), 2,
      aux_sym_case_value_token1,
      sym_identifier,
    ACTIONS(104), 2,
      anon_sym_ELSE,
      anon_sym_END_CASE,
  [858] = 5,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(113), 1,
      aux_sym_case_value_token2,
    STATE(34), 1,
      aux_sym_case_body_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(111), 3,
      anon_sym_ELSE,
      anon_sym_END_CASE,
      aux_sym_case_value_token1,
  [877] = 5,
    ACTIONS(115), 1,
      sym_identifier,
    ACTIONS(118), 1,
      aux_sym_case_value_token2,
    STATE(32), 1,
      aux_sym_case_body_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(104), 3,
      anon_sym_ELSE,
      anon_sym_END_CASE,
      aux_sym_case_value_token1,
  [896] = 5,
    ACTIONS(120), 1,
      sym_identifier,
    ACTIONS(125), 1,
      aux_sym_case_value_token2,
    STATE(34), 1,
      aux_sym_case_body_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(123), 3,
      anon_sym_ELSE,
      anon_sym_END_CASE,
      aux_sym_case_value_token1,
  [915] = 3,
    ACTIONS(129), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(127), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [929] = 3,
    ACTIONS(133), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(131), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [943] = 5,
    ACTIONS(135), 1,
      ts_builtin_sym_end,
    ACTIONS(137), 1,
      anon_sym_PROGRAM,
    STATE(52), 1,
      sym_program_definition,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [961] = 3,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(140), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [975] = 5,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
    STATE(52), 1,
      sym_program_definition,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(37), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [993] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(131), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [1004] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(146), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [1015] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(148), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [1026] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(150), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [1037] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(140), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [1048] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(152), 4,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [1059] = 3,
    ACTIONS(156), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(154), 2,
      aux_sym_case_value_token2,
      sym_identifier,
  [1071] = 4,
    ACTIONS(158), 1,
      anon_sym_COLON,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1085] = 4,
    ACTIONS(162), 1,
      anon_sym_COLON,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(48), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1099] = 4,
    ACTIONS(167), 1,
      anon_sym_ELSE,
    ACTIONS(169), 1,
      anon_sym_END_CASE,
    STATE(57), 1,
      sym_case_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1113] = 4,
    ACTIONS(160), 1,
      anon_sym_COMMA,
    ACTIONS(171), 1,
      anon_sym_COLON,
    STATE(47), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1127] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1136] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(175), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1145] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(177), 2,
      anon_sym_EQ,
      anon_sym_ACCESS,
  [1154] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(162), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [1163] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(179), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1172] = 2,
    ACTIONS(181), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1180] = 2,
    ACTIONS(183), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1188] = 2,
    ACTIONS(185), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1196] = 2,
    ACTIONS(169), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1204] = 2,
    ACTIONS(187), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 53,
  [SMALL_STATE(5)] = 89,
  [SMALL_STATE(6)] = 121,
  [SMALL_STATE(7)] = 149,
  [SMALL_STATE(8)] = 175,
  [SMALL_STATE(9)] = 205,
  [SMALL_STATE(10)] = 239,
  [SMALL_STATE(11)] = 265,
  [SMALL_STATE(12)] = 301,
  [SMALL_STATE(13)] = 337,
  [SMALL_STATE(14)] = 373,
  [SMALL_STATE(15)] = 400,
  [SMALL_STATE(16)] = 427,
  [SMALL_STATE(17)] = 454,
  [SMALL_STATE(18)] = 481,
  [SMALL_STATE(19)] = 508,
  [SMALL_STATE(20)] = 535,
  [SMALL_STATE(21)] = 562,
  [SMALL_STATE(22)] = 589,
  [SMALL_STATE(23)] = 618,
  [SMALL_STATE(24)] = 645,
  [SMALL_STATE(25)] = 672,
  [SMALL_STATE(26)] = 700,
  [SMALL_STATE(27)] = 728,
  [SMALL_STATE(28)] = 756,
  [SMALL_STATE(29)] = 784,
  [SMALL_STATE(30)] = 814,
  [SMALL_STATE(31)] = 836,
  [SMALL_STATE(32)] = 858,
  [SMALL_STATE(33)] = 877,
  [SMALL_STATE(34)] = 896,
  [SMALL_STATE(35)] = 915,
  [SMALL_STATE(36)] = 929,
  [SMALL_STATE(37)] = 943,
  [SMALL_STATE(38)] = 961,
  [SMALL_STATE(39)] = 975,
  [SMALL_STATE(40)] = 993,
  [SMALL_STATE(41)] = 1004,
  [SMALL_STATE(42)] = 1015,
  [SMALL_STATE(43)] = 1026,
  [SMALL_STATE(44)] = 1037,
  [SMALL_STATE(45)] = 1048,
  [SMALL_STATE(46)] = 1059,
  [SMALL_STATE(47)] = 1071,
  [SMALL_STATE(48)] = 1085,
  [SMALL_STATE(49)] = 1099,
  [SMALL_STATE(50)] = 1113,
  [SMALL_STATE(51)] = 1127,
  [SMALL_STATE(52)] = 1136,
  [SMALL_STATE(53)] = 1145,
  [SMALL_STATE(54)] = 1154,
  [SMALL_STATE(55)] = 1163,
  [SMALL_STATE(56)] = 1172,
  [SMALL_STATE(57)] = 1180,
  [SMALL_STATE(58)] = 1188,
  [SMALL_STATE(59)] = 1196,
  [SMALL_STATE(60)] = 1204,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(16),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_else_clause, 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_else_clause, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_body, 1),
  [101] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 2), SHIFT_REPEAT(50),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_body_repeat2, 2), SHIFT_REPEAT(50),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat2, 3),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 2), SHIFT_REPEAT(32),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat2, 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(34),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 2),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 3),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_statement, 1),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 2),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2), SHIFT_REPEAT(46),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [181] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const uint16_t *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .field_count = FIELD_COUNT,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
    .field_names = ts_field_names,
    .large_state_count = LARGE_STATE_COUNT,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .state_count = STATE_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
