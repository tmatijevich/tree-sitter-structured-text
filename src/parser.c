#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 31
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4

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
  sym_number = 28,
  sym_inline_comment = 29,
  sym_block_comment = 30,
  sym_source_file = 31,
  sym__definition = 32,
  sym_program_definition = 33,
  sym_statement = 34,
  sym_assignment = 35,
  sym__expression = 36,
  sym_unary_expression = 37,
  sym_binary_expression = 38,
  sym_variable = 39,
  sym__index_array = 40,
  sym_index = 41,
  sym_dot_operator = 42,
  sym_literal = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_program_definition_repeat1 = 45,
  alias_sym_member = 46,
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
  [sym_number] = "number",
  [sym_inline_comment] = "inline_comment",
  [sym_block_comment] = "block_comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_program_definition] = "program_definition",
  [sym_statement] = "statement",
  [sym_assignment] = "assignment",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_variable] = "variable",
  [sym__index_array] = "_index_array",
  [sym_index] = "index",
  [sym_dot_operator] = "dot_operator",
  [sym_literal] = "literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
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
  [sym_number] = sym_number,
  [sym_inline_comment] = sym_inline_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_program_definition] = sym_program_definition,
  [sym_statement] = sym_statement,
  [sym_assignment] = sym_assignment,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_variable] = sym_variable,
  [sym__index_array] = sym__index_array,
  [sym_index] = sym_index,
  [sym_dot_operator] = sym_dot_operator,
  [sym_literal] = sym_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_program_definition_repeat1] = {
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
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(7);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(34);
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(2);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 7:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 8:
      if (eof) ADVANCE(9);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(13);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(11);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead == '=') ADVANCE(24);
      if (lookahead == '>') ADVANCE(21);
      if (lookahead == '[') ADVANCE(26);
      if (lookahead == ']') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(16);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(22);
      if (lookahead == '>') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(6);
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'O') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 10:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'R') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'G') ADVANCE(19);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 20:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 22:
      if (lookahead == 'A') ADVANCE(25);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'G') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 8},
  [2] = {.lex_state = 8},
  [3] = {.lex_state = 8},
  [4] = {.lex_state = 8},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 8},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 8},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 8},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 8},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 8},
  [42] = {.lex_state = 8},
  [43] = {.lex_state = 8},
  [44] = {.lex_state = 8},
  [45] = {.lex_state = 0},
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
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym__definition] = STATE(37),
    [sym_program_definition] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__index_array] = STATE(5),
    [sym_index] = STATE(3),
    [sym_dot_operator] = STATE(7),
    [anon_sym_COLON_EQ] = ACTIONS(9),
    [anon_sym_ACCESS] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_RPAREN] = ACTIONS(9),
    [anon_sym_DASH] = ACTIONS(9),
    [anon_sym_STAR_STAR] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_SLASH] = ACTIONS(11),
    [anon_sym_PLUS] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [anon_sym_GT] = ACTIONS(11),
    [anon_sym_LT_EQ] = ACTIONS(9),
    [anon_sym_GT_EQ] = ACTIONS(9),
    [anon_sym_EQ] = ACTIONS(9),
    [anon_sym_LT_GT] = ACTIONS(9),
    [anon_sym_AND] = ACTIONS(9),
    [anon_sym_XOR] = ACTIONS(9),
    [anon_sym_OR] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(9),
    [anon_sym_DOT] = ACTIONS(15),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [3] = {
    [sym_index] = STATE(6),
    [anon_sym_COLON_EQ] = ACTIONS(17),
    [anon_sym_ACCESS] = ACTIONS(17),
    [anon_sym_SEMI] = ACTIONS(17),
    [anon_sym_RPAREN] = ACTIONS(17),
    [anon_sym_DASH] = ACTIONS(17),
    [anon_sym_STAR_STAR] = ACTIONS(17),
    [anon_sym_STAR] = ACTIONS(19),
    [anon_sym_SLASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(17),
    [anon_sym_LT] = ACTIONS(19),
    [anon_sym_GT] = ACTIONS(19),
    [anon_sym_LT_EQ] = ACTIONS(17),
    [anon_sym_GT_EQ] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(17),
    [anon_sym_LT_GT] = ACTIONS(17),
    [anon_sym_AND] = ACTIONS(17),
    [anon_sym_XOR] = ACTIONS(17),
    [anon_sym_OR] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_RBRACK] = ACTIONS(17),
    [anon_sym_DOT] = ACTIONS(17),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
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
  [30] = 5,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(27), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 15,
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
  [64] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(31), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 16,
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
  [93] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(35), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 15,
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
  [121] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 15,
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
  [149] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(43), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 15,
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
  [177] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(47), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 15,
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
  [205] = 6,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 10,
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
  [237] = 4,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(57), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 12,
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
  [265] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(57), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 13,
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
  [291] = 5,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(49), 12,
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
  [321] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(61), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(59), 13,
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
  [347] = 8,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(49), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [383] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 13,
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
  [409] = 7,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(49), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [443] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(75), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 13,
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
  [469] = 9,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(79), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(77), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [505] = 9,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(77), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [541] = 9,
    ACTIONS(53), 1,
      anon_sym_STAR_STAR,
    ACTIONS(83), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(51), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(55), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(63), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(67), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(77), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [577] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(12), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [602] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(11), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [627] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(17), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [652] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(21), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [677] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(16), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [702] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(18), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [727] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(22), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [752] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(20), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [777] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(14), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [802] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(89), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(13), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [827] = 6,
    ACTIONS(93), 1,
      sym_identifier,
    ACTIONS(96), 1,
      anon_sym_END_PROGRAM,
    STATE(41), 1,
      sym_variable,
    STATE(42), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(33), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [848] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_END_PROGRAM,
    STATE(41), 1,
      sym_variable,
    STATE(42), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(33), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [869] = 6,
    ACTIONS(85), 1,
      sym_identifier,
    ACTIONS(100), 1,
      anon_sym_END_PROGRAM,
    STATE(41), 1,
      sym_variable,
    STATE(42), 1,
      sym_assignment,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(34), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
  [890] = 4,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(104), 1,
      anon_sym_PROGRAM,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(36), 3,
      sym__definition,
      sym_program_definition,
      aux_sym_source_file_repeat1,
  [906] = 4,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(36), 3,
      sym__definition,
      sym_program_definition,
      aux_sym_source_file_repeat1,
  [922] = 4,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      aux_sym_dot_operator_token1,
    STATE(9), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [936] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [945] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(115), 2,
      anon_sym_END_PROGRAM,
      sym_identifier,
  [954] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(117), 2,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
  [963] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(119), 2,
      anon_sym_END_PROGRAM,
      sym_identifier,
  [972] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [981] = 2,
    ACTIONS(123), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [989] = 2,
    ACTIONS(125), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 64,
  [SMALL_STATE(7)] = 93,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 205,
  [SMALL_STATE(12)] = 237,
  [SMALL_STATE(13)] = 265,
  [SMALL_STATE(14)] = 291,
  [SMALL_STATE(15)] = 321,
  [SMALL_STATE(16)] = 347,
  [SMALL_STATE(17)] = 383,
  [SMALL_STATE(18)] = 409,
  [SMALL_STATE(19)] = 443,
  [SMALL_STATE(20)] = 469,
  [SMALL_STATE(21)] = 505,
  [SMALL_STATE(22)] = 541,
  [SMALL_STATE(23)] = 577,
  [SMALL_STATE(24)] = 602,
  [SMALL_STATE(25)] = 627,
  [SMALL_STATE(26)] = 652,
  [SMALL_STATE(27)] = 677,
  [SMALL_STATE(28)] = 702,
  [SMALL_STATE(29)] = 727,
  [SMALL_STATE(30)] = 752,
  [SMALL_STATE(31)] = 777,
  [SMALL_STATE(32)] = 802,
  [SMALL_STATE(33)] = 827,
  [SMALL_STATE(34)] = 848,
  [SMALL_STATE(35)] = 869,
  [SMALL_STATE(36)] = 890,
  [SMALL_STATE(37)] = 906,
  [SMALL_STATE(38)] = 922,
  [SMALL_STATE(39)] = 936,
  [SMALL_STATE(40)] = 945,
  [SMALL_STATE(41)] = 954,
  [SMALL_STATE(42)] = 963,
  [SMALL_STATE(43)] = 972,
  [SMALL_STATE(44)] = 981,
  [SMALL_STATE(45)] = 989,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_array, 1, .production_id = 4),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_array, 1, .production_id = 4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_array, 2, .production_id = 6),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_array, 2, .production_id = 6),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [104] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [125] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
