#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  anon_sym_PROGRAM = 2,
  anon_sym_END_PROGRAM = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_ACCESS = 5,
  anon_sym_SEMI = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  aux_sym_unary_expression_token1 = 9,
  anon_sym_DASH = 10,
  anon_sym_STAR_STAR = 11,
  anon_sym_STAR = 12,
  anon_sym_SLASH = 13,
  anon_sym_PLUS = 14,
  anon_sym_LT = 15,
  anon_sym_GT = 16,
  anon_sym_LT_EQ = 17,
  anon_sym_GT_EQ = 18,
  anon_sym_EQ = 19,
  anon_sym_LT_GT = 20,
  anon_sym_AND = 21,
  anon_sym_XOR = 22,
  anon_sym_OR = 23,
  anon_sym_LBRACK = 24,
  anon_sym_RBRACK = 25,
  anon_sym_DOT = 26,
  aux_sym_dot_operator_token1 = 27,
  sym_decimal = 28,
  anon_sym__ = 29,
  aux_sym_floating_point_token1 = 30,
  aux_sym_floating_point_token2 = 31,
  sym_inline_comment = 32,
  sym_block_comment = 33,
  sym_source_file = 34,
  sym__definition = 35,
  sym_program_definition = 36,
  sym_statement = 37,
  sym_assignment = 38,
  sym_expression_statement = 39,
  sym__expression = 40,
  sym_unary_expression = 41,
  sym_binary_expression = 42,
  sym_variable = 43,
  sym__index_array = 44,
  sym_index = 45,
  sym_dot_operator = 46,
  sym_literal = 47,
  sym_number = 48,
  sym_floating_point = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_program_definition_repeat1 = 51,
  aux_sym_floating_point_repeat1 = 52,
  alias_sym_member = 53,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_END_PROGRAM] = "END_PROGRAM",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_ACCESS] = "ACCESS",
  [anon_sym_SEMI] = ";",
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
  [anon_sym_EQ] = "=",
  [anon_sym_LT_GT] = "<>",
  [anon_sym_AND] = "AND",
  [anon_sym_XOR] = "XOR",
  [anon_sym_OR] = "OR",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DOT] = ".",
  [aux_sym_dot_operator_token1] = "dot_operator_token1",
  [sym_decimal] = "decimal",
  [anon_sym__] = "_",
  [aux_sym_floating_point_token1] = "floating_point_token1",
  [aux_sym_floating_point_token2] = "floating_point_token2",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_program_definition] = "program_definition",
  [sym_statement] = "statement",
  [sym_assignment] = "assignment",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_variable] = "variable",
  [sym__index_array] = "_index_array",
  [sym_index] = "index",
  [sym_dot_operator] = "dot_operator",
  [sym_literal] = "literal",
  [sym_number] = "number",
  [sym_floating_point] = "floating_point",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [aux_sym_floating_point_repeat1] = "floating_point_repeat1",
  [alias_sym_member] = "member",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_END_PROGRAM] = anon_sym_END_PROGRAM,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_ACCESS] = anon_sym_ACCESS,
  [anon_sym_SEMI] = anon_sym_SEMI,
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
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LT_GT] = anon_sym_LT_GT,
  [anon_sym_AND] = anon_sym_AND,
  [anon_sym_XOR] = anon_sym_XOR,
  [anon_sym_OR] = anon_sym_OR,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DOT] = anon_sym_DOT,
  [aux_sym_dot_operator_token1] = aux_sym_dot_operator_token1,
  [sym_decimal] = sym_decimal,
  [anon_sym__] = anon_sym__,
  [aux_sym_floating_point_token1] = aux_sym_floating_point_token1,
  [aux_sym_floating_point_token2] = aux_sym_floating_point_token2,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_program_definition] = sym_program_definition,
  [sym_statement] = sym_statement,
  [sym_assignment] = sym_assignment,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_variable] = sym_variable,
  [sym__index_array] = sym__index_array,
  [sym_index] = sym_index,
  [sym_dot_operator] = sym_dot_operator,
  [sym_literal] = sym_literal,
  [sym_number] = sym_number,
  [sym_floating_point] = sym_floating_point,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
  [aux_sym_floating_point_repeat1] = aux_sym_floating_point_repeat1,
  [alias_sym_member] = alias_sym_member,
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ACCESS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
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
  [sym_decimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_floating_point_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_floating_point_token2] = {
    .visible = false,
    .named = false,
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
  },
  [sym_program_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_statement] = {
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
  [sym__index_array] = {
    .visible = false,
    .named = true,
  },
  [sym_index] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_floating_point] = {
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
  [aux_sym_floating_point_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_member] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_dim1 = 1,
  field_dim2 = 2,
  field_name = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_dim1] = "dim1",
  [field_dim2] = "dim2",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[7] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 0},
  [2] =
    {field_dim1, 1, .inherited = true},
    {field_dim2, 1, .inherited = true},
    {field_name, 0},
  [5] =
    {field_dim1, 0},
  [6] =
    {field_dim1, 0},
    {field_dim2, 1},
};

static TSSymbol ts_alias_sequences[7][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
    [1] = alias_sym_member,
  },
};

static uint16_t ts_non_terminal_alias_map[] = {
  sym_variable, 2,
    sym_variable,
    alias_sym_member,
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(10);
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(36);
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
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 9:
      if (eof) ADVANCE(10);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ')') ADVANCE(14);
      if (lookahead == '*') ADVANCE(19);
      if (lookahead == '+') ADVANCE(21);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(30);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == ';') ADVANCE(12);
      if (lookahead == '<') ADVANCE(22);
      if (lookahead == '=') ADVANCE(26);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '[') ADVANCE(28);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(18);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(35);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_decimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_floating_point_token1);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(40);
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
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'O') ADVANCE(3);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'X') ADVANCE(5);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(aux_sym_floating_point_token2);
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(13);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(aux_sym_floating_point_token2);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 19:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'P') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 26:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 31:
      if (lookahead == 'A') ADVANCE(32);
      END_STATE();
    case 32:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 9},
  [2] = {.lex_state = 9},
  [3] = {.lex_state = 9},
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 9},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 9},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 9},
  [27] = {.lex_state = 9},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 9},
  [30] = {.lex_state = 9},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 9},
  [33] = {.lex_state = 9},
  [34] = {.lex_state = 9},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 9},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_END_PROGRAM] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_ACCESS] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
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
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LT_GT] = ACTIONS(1),
    [anon_sym_AND] = ACTIONS(1),
    [anon_sym_XOR] = ACTIONS(1),
    [anon_sym_OR] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_dot_operator_token1] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [aux_sym_floating_point_token1] = ACTIONS(1),
    [aux_sym_floating_point_token2] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(56),
    [sym__definition] = STATE(50),
    [sym_program_definition] = STATE(50),
    [aux_sym_source_file_repeat1] = STATE(50),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(3), 1,
      sym_index,
    STATE(8), 1,
      sym__index_array,
    STATE(14), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(11), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 15,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [43] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(9), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(19), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 16,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [78] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(23), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 17,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [108] = 5,
    STATE(5), 1,
      aux_sym_floating_point_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(29), 2,
      anon_sym__,
      aux_sym_floating_point_token1,
    ACTIONS(27), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 14,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
      aux_sym_floating_point_token2,
  [142] = 6,
    ACTIONS(38), 1,
      aux_sym_floating_point_token2,
    STATE(5), 1,
      aux_sym_floating_point_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(36), 2,
      anon_sym__,
      aux_sym_floating_point_token1,
    ACTIONS(34), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(32), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [178] = 6,
    ACTIONS(46), 1,
      aux_sym_floating_point_token2,
    STATE(6), 1,
      aux_sym_floating_point_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(44), 2,
      anon_sym__,
      aux_sym_floating_point_token1,
    ACTIONS(42), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(40), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [214] = 5,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(50), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 15,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [248] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(54), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 16,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
      anon_sym_DOT,
  [277] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(58), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(56), 15,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [305] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(62), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(60), 15,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [333] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(66), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(64), 15,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [361] = 5,
    ACTIONS(72), 1,
      anon_sym_DOT,
    ACTIONS(74), 1,
      aux_sym_floating_point_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(70), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [393] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(78), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(76), 15,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [421] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(82), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(80), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [447] = 5,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [477] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(94), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(92), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [503] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(98), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(96), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [529] = 4,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
    ACTIONS(104), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(102), 11,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [557] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(70), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(68), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [583] = 13,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(108), 1,
      anon_sym_END_PROGRAM,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(31), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(46), 2,
      sym_assignment,
      sym_expression_statement,
    STATE(33), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [629] = 8,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(84), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [665] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(128), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(126), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [691] = 7,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(84), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [725] = 6,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(90), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(84), 10,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [757] = 4,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(90), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 12,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [785] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(90), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(84), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [811] = 13,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    ACTIONS(130), 1,
      anon_sym_END_PROGRAM,
    STATE(15), 1,
      sym_number,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(21), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(46), 2,
      sym_assignment,
      sym_expression_statement,
    STATE(33), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [857] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(34), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(32), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [883] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(134), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(132), 13,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_STAR_STAR,
      anon_sym_PLUS,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [909] = 13,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(139), 1,
      anon_sym_END_PROGRAM,
    ACTIONS(141), 1,
      anon_sym_LPAREN,
    ACTIONS(144), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(147), 1,
      anon_sym_DASH,
    ACTIONS(150), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(19), 1,
      sym_variable,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(31), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(46), 2,
      sym_assignment,
      sym_expression_statement,
    STATE(33), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_literal,
  [955] = 9,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(153), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [991] = 9,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(153), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [1027] = 9,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(159), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(153), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [1063] = 9,
    ACTIONS(86), 1,
      anon_sym_STAR_STAR,
    ACTIONS(161), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(118), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(120), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(122), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(124), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(153), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [1099] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(35), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1132] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(25), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1165] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(26), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1198] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(24), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1231] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(27), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1264] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(16), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1297] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(23), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1330] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(32), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1363] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1396] = 9,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(110), 1,
      anon_sym_LPAREN,
    ACTIONS(112), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(114), 1,
      anon_sym_DASH,
    ACTIONS(116), 1,
      sym_decimal,
    STATE(15), 1,
      sym_number,
    STATE(20), 1,
      sym_floating_point,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(34), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1429] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(165), 2,
      aux_sym_unary_expression_token1,
      sym_decimal,
    ACTIONS(163), 4,
      anon_sym_END_PROGRAM,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1444] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(169), 2,
      aux_sym_unary_expression_token1,
      sym_decimal,
    ACTIONS(167), 4,
      anon_sym_END_PROGRAM,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1459] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(173), 2,
      aux_sym_unary_expression_token1,
      sym_decimal,
    ACTIONS(171), 4,
      anon_sym_END_PROGRAM,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1474] = 4,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 1,
      anon_sym_PROGRAM,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(49), 3,
      sym__definition,
      sym_program_definition,
      aux_sym_source_file_repeat1,
  [1490] = 4,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(180), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(49), 3,
      sym__definition,
      sym_program_definition,
      aux_sym_source_file_repeat1,
  [1506] = 4,
    ACTIONS(182), 1,
      sym_identifier,
    ACTIONS(184), 1,
      aux_sym_dot_operator_token1,
    STATE(11), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1520] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1529] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(188), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1538] = 2,
    ACTIONS(190), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1546] = 2,
    ACTIONS(192), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1554] = 2,
    ACTIONS(194), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1562] = 2,
    ACTIONS(196), 1,
      sym_decimal,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1570] = 2,
    ACTIONS(198), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 43,
  [SMALL_STATE(4)] = 78,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 142,
  [SMALL_STATE(7)] = 178,
  [SMALL_STATE(8)] = 214,
  [SMALL_STATE(9)] = 248,
  [SMALL_STATE(10)] = 277,
  [SMALL_STATE(11)] = 305,
  [SMALL_STATE(12)] = 333,
  [SMALL_STATE(13)] = 361,
  [SMALL_STATE(14)] = 393,
  [SMALL_STATE(15)] = 421,
  [SMALL_STATE(16)] = 447,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 503,
  [SMALL_STATE(19)] = 529,
  [SMALL_STATE(20)] = 557,
  [SMALL_STATE(21)] = 583,
  [SMALL_STATE(22)] = 629,
  [SMALL_STATE(23)] = 665,
  [SMALL_STATE(24)] = 691,
  [SMALL_STATE(25)] = 725,
  [SMALL_STATE(26)] = 757,
  [SMALL_STATE(27)] = 785,
  [SMALL_STATE(28)] = 811,
  [SMALL_STATE(29)] = 857,
  [SMALL_STATE(30)] = 883,
  [SMALL_STATE(31)] = 909,
  [SMALL_STATE(32)] = 955,
  [SMALL_STATE(33)] = 991,
  [SMALL_STATE(34)] = 1027,
  [SMALL_STATE(35)] = 1063,
  [SMALL_STATE(36)] = 1099,
  [SMALL_STATE(37)] = 1132,
  [SMALL_STATE(38)] = 1165,
  [SMALL_STATE(39)] = 1198,
  [SMALL_STATE(40)] = 1231,
  [SMALL_STATE(41)] = 1264,
  [SMALL_STATE(42)] = 1297,
  [SMALL_STATE(43)] = 1330,
  [SMALL_STATE(44)] = 1363,
  [SMALL_STATE(45)] = 1396,
  [SMALL_STATE(46)] = 1429,
  [SMALL_STATE(47)] = 1444,
  [SMALL_STATE(48)] = 1459,
  [SMALL_STATE(49)] = 1474,
  [SMALL_STATE(50)] = 1490,
  [SMALL_STATE(51)] = 1506,
  [SMALL_STATE(52)] = 1520,
  [SMALL_STATE(53)] = 1529,
  [SMALL_STATE(54)] = 1538,
  [SMALL_STATE(55)] = 1546,
  [SMALL_STATE(56)] = 1554,
  [SMALL_STATE(57)] = 1562,
  [SMALL_STATE(58)] = 1570,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_array, 1, .production_id = 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_array, 1, .production_id = 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_floating_point_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_floating_point_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_floating_point_repeat1, 2), SHIFT_REPEAT(5),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point, 3),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point, 3),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point, 2),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_array, 2, .production_id = 6),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_array, 2, .production_id = 6),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point, 5),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_floating_point, 4),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_floating_point, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(36),
  [144] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(42),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(42),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(13),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [194] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
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
