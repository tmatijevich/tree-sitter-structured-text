#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_PROGRAM = 1,
  anon_sym_END_PROGRAM = 2,
  anon_sym_COLON_EQ = 3,
  anon_sym_ACCESS = 4,
  anon_sym_SEMI = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  aux_sym_unary_expression_token1 = 8,
  anon_sym_DASH = 9,
  anon_sym_STAR_STAR = 10,
  anon_sym_STAR = 11,
  anon_sym_SLASH = 12,
  anon_sym_PLUS = 13,
  anon_sym_LT = 14,
  anon_sym_GT = 15,
  anon_sym_LT_EQ = 16,
  anon_sym_GT_EQ = 17,
  anon_sym_EQ = 18,
  anon_sym_LT_GT = 19,
  anon_sym_AND = 20,
  anon_sym_XOR = 21,
  anon_sym_OR = 22,
  anon_sym_LBRACK = 23,
  anon_sym_RBRACK = 24,
  anon_sym_DOT = 25,
  aux_sym_dot_operator_token1 = 26,
  aux_sym_number_token1 = 27,
  anon_sym_SLASH_SLASH = 28,
  aux_sym_comment_token1 = 29,
  anon_sym_LPAREN_STAR = 30,
  aux_sym_comment_token2 = 31,
  sym_identifier = 32,
  sym_source_file = 33,
  sym__definition = 34,
  sym_program_definition = 35,
  sym_statement = 36,
  sym_assignment = 37,
  sym__expression = 38,
  sym_unary_expression = 39,
  sym_binary_expression = 40,
  sym_variable = 41,
  sym__index_array = 42,
  sym_index = 43,
  sym_dot_operator = 44,
  sym_literal = 45,
  sym_number = 46,
  sym_comment = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_program_definition_repeat1 = 49,
  alias_sym_member = 50,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
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
  [aux_sym_number_token1] = "number_token1",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_LPAREN_STAR] = "(*",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_identifier] = "identifier",
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
  [sym_number] = "number",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [alias_sym_member] = "member",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
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
  [aux_sym_number_token1] = aux_sym_number_token1,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_LPAREN_STAR] = anon_sym_LPAREN_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_identifier] = sym_identifier,
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
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
  [alias_sym_member] = alias_sym_member,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [aux_sym_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LPAREN_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
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
      if (eof) ADVANCE(37);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '*') ADVANCE(49);
      if (lookahead == '+') ADVANCE(51);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(50);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(52);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'A') ADVANCE(11);
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'N') ADVANCE(21);
      if (lookahead == 'O') ADVANCE(26);
      if (lookahead == 'P') ADVANCE(29);
      if (lookahead == 'X') ADVANCE(23);
      if (lookahead == '[') ADVANCE(61);
      if (lookahead == ']') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '-') ADVANCE(47);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'N') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'E') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 3:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(73);
      if (lookahead != 0) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(18);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'C') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(58);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(35);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(30);
      END_STATE();
    case 18:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 25:
      if (lookahead == 'P') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'R') ADVANCE(60);
      END_STATE();
    case 27:
      if (lookahead == 'R') ADVANCE(59);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 29:
      if (lookahead == 'R') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'R') ADVANCE(10);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(24);
      END_STATE();
    case 32:
      if (lookahead == 'S') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'S') ADVANCE(32);
      END_STATE();
    case 34:
      if (lookahead == 'T') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 36:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(72);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(48);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(69);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(54);
      if (lookahead == '>') ADVANCE(57);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(55);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(64);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(65);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_number_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN_STAR);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_comment_token2);
      if (lookahead == '*') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(6);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'G') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(87);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 3},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 0},
  [55] = {(TSStateId)(-1)},
  [56] = {(TSStateId)(-1)},
  [57] = {.lex_state = 70},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 5},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [aux_sym_number_token1] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
  },
  [1] = {
    [sym_source_file] = STATE(54),
    [sym__definition] = STATE(43),
    [sym_program_definition] = STATE(50),
    [sym_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(41),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_PROGRAM] = ACTIONS(9),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__index_array] = STATE(4),
    [sym_index] = STATE(3),
    [sym_dot_operator] = STATE(7),
    [sym_comment] = STATE(2),
    [anon_sym_COLON_EQ] = ACTIONS(11),
    [anon_sym_ACCESS] = ACTIONS(11),
    [anon_sym_SEMI] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(11),
    [anon_sym_DASH] = ACTIONS(11),
    [anon_sym_STAR_STAR] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_SLASH] = ACTIONS(13),
    [anon_sym_PLUS] = ACTIONS(11),
    [anon_sym_LT] = ACTIONS(13),
    [anon_sym_GT] = ACTIONS(13),
    [anon_sym_LT_EQ] = ACTIONS(11),
    [anon_sym_GT_EQ] = ACTIONS(11),
    [anon_sym_EQ] = ACTIONS(11),
    [anon_sym_LT_GT] = ACTIONS(11),
    [anon_sym_AND] = ACTIONS(11),
    [anon_sym_XOR] = ACTIONS(11),
    [anon_sym_OR] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_RBRACK] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_LPAREN_STAR] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(3), 1,
      sym_comment,
    STATE(6), 1,
      sym_index,
    ACTIONS(21), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 16,
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
  [40] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(17), 1,
      anon_sym_DOT,
    STATE(4), 1,
      sym_comment,
    STATE(10), 1,
      sym_dot_operator,
    ACTIONS(25), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 15,
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
  [79] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(5), 1,
      sym_comment,
    ACTIONS(29), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(27), 17,
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
  [114] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(6), 1,
      sym_comment,
    ACTIONS(33), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 16,
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
  [148] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(7), 1,
      sym_comment,
    ACTIONS(37), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(35), 15,
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
  [181] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(8), 1,
      sym_comment,
    ACTIONS(41), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(39), 15,
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
  [214] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(9), 1,
      sym_comment,
    ACTIONS(45), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(43), 15,
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
  [247] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(10), 1,
      sym_comment,
    ACTIONS(49), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(47), 15,
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
  [280] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(55), 1,
      anon_sym_DOT,
    STATE(11), 1,
      sym_comment,
    ACTIONS(53), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(51), 13,
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
  [314] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(12), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 13,
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
  [345] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(13), 1,
      sym_comment,
    ACTIONS(63), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(61), 13,
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
  [376] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    STATE(14), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(57), 6,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [417] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(15), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(77), 13,
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
  [448] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(16), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(81), 13,
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
  [479] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(17), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(85), 13,
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
  [510] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    STATE(18), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 12,
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
  [545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(19), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(89), 13,
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
  [576] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    STATE(20), 1,
      sym_comment,
    ACTIONS(59), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(57), 12,
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
  [609] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    STATE(21), 1,
      sym_comment,
    ACTIONS(59), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(57), 10,
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
  [646] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    STATE(22), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(57), 8,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(23), 1,
      sym_comment,
    ACTIONS(95), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(93), 13,
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
  [716] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    ACTIONS(97), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(99), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [757] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    STATE(25), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(99), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [798] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(67), 1,
      anon_sym_STAR_STAR,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(26), 1,
      sym_comment,
    ACTIONS(65), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(69), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(71), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(73), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(75), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(99), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [839] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(12), 1,
      sym__expression,
    STATE(19), 1,
      sym_number,
    STATE(27), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [877] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(18), 1,
      sym__expression,
    STATE(19), 1,
      sym_number,
    STATE(28), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [915] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(13), 1,
      sym__expression,
    STATE(19), 1,
      sym_number,
    STATE(29), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [953] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(14), 1,
      sym__expression,
    STATE(19), 1,
      sym_number,
    STATE(30), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [991] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(19), 1,
      sym_number,
    STATE(22), 1,
      sym__expression,
    STATE(31), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1029] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(19), 1,
      sym_number,
    STATE(21), 1,
      sym__expression,
    STATE(32), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1067] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(19), 1,
      sym_number,
    STATE(20), 1,
      sym__expression,
    STATE(33), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1105] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(19), 1,
      sym_number,
    STATE(25), 1,
      sym__expression,
    STATE(34), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1143] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(19), 1,
      sym_number,
    STATE(24), 1,
      sym__expression,
    STATE(35), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1181] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    ACTIONS(109), 1,
      anon_sym_DOT,
    ACTIONS(111), 1,
      aux_sym_number_token1,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(19), 1,
      sym_number,
    STATE(26), 1,
      sym__expression,
    STATE(36), 1,
      sym_comment,
    ACTIONS(107), 2,
      aux_sym_unary_expression_token1,
      anon_sym_DASH,
    STATE(23), 4,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym_literal,
  [1219] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(115), 1,
      anon_sym_END_PROGRAM,
    STATE(37), 1,
      sym_comment,
    STATE(38), 1,
      aux_sym_program_definition_repeat1,
    STATE(44), 1,
      sym_variable,
    STATE(45), 1,
      sym_assignment,
    STATE(46), 1,
      sym_statement,
  [1247] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(117), 1,
      anon_sym_END_PROGRAM,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(44), 1,
      sym_variable,
    STATE(45), 1,
      sym_assignment,
    STATE(46), 1,
      sym_statement,
    STATE(38), 2,
      sym_comment,
      aux_sym_program_definition_repeat1,
  [1273] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(113), 1,
      sym_identifier,
    ACTIONS(122), 1,
      anon_sym_END_PROGRAM,
    STATE(37), 1,
      aux_sym_program_definition_repeat1,
    STATE(39), 1,
      sym_comment,
    STATE(44), 1,
      sym_variable,
    STATE(45), 1,
      sym_assignment,
    STATE(46), 1,
      sym_statement,
  [1301] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(124), 1,
      ts_builtin_sym_end,
    ACTIONS(126), 1,
      anon_sym_PROGRAM,
    STATE(43), 1,
      sym__definition,
    STATE(50), 1,
      sym_program_definition,
    STATE(40), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
  [1324] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(9), 1,
      anon_sym_PROGRAM,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
    STATE(40), 1,
      aux_sym_source_file_repeat1,
    STATE(41), 1,
      sym_comment,
    STATE(43), 1,
      sym__definition,
    STATE(50), 1,
      sym_program_definition,
  [1349] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(131), 1,
      aux_sym_dot_operator_token1,
    ACTIONS(133), 1,
      sym_identifier,
    STATE(9), 1,
      sym_variable,
    STATE(42), 1,
      sym_comment,
  [1368] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(43), 1,
      sym_comment,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1382] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(44), 1,
      sym_comment,
    ACTIONS(137), 2,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
  [1396] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(45), 1,
      sym_comment,
    ACTIONS(139), 2,
      anon_sym_END_PROGRAM,
      sym_identifier,
  [1410] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(46), 1,
      sym_comment,
    ACTIONS(141), 2,
      anon_sym_END_PROGRAM,
      sym_identifier,
  [1424] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(47), 1,
      sym_comment,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1438] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(48), 1,
      sym_comment,
    ACTIONS(145), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1452] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(49), 1,
      sym_comment,
    ACTIONS(147), 2,
      anon_sym_END_PROGRAM,
      sym_identifier,
  [1466] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    STATE(50), 1,
      sym_comment,
    ACTIONS(149), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1480] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(151), 1,
      aux_sym_number_token1,
    STATE(51), 1,
      sym_comment,
  [1493] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(153), 1,
      sym_identifier,
    STATE(52), 1,
      sym_comment,
  [1506] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(155), 1,
      aux_sym_number_token1,
    STATE(53), 1,
      sym_comment,
  [1519] = 4,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_LPAREN_STAR,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_comment,
  [1532] = 1,
    ACTIONS(159), 1,
      ts_builtin_sym_end,
  [1536] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
  [1540] = 1,
    ACTIONS(163), 1,
      aux_sym_comment_token1,
  [1544] = 1,
    ACTIONS(165), 1,
      anon_sym_RPAREN,
  [1548] = 1,
    ACTIONS(167), 1,
      aux_sym_comment_token2,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 114,
  [SMALL_STATE(7)] = 148,
  [SMALL_STATE(8)] = 181,
  [SMALL_STATE(9)] = 214,
  [SMALL_STATE(10)] = 247,
  [SMALL_STATE(11)] = 280,
  [SMALL_STATE(12)] = 314,
  [SMALL_STATE(13)] = 345,
  [SMALL_STATE(14)] = 376,
  [SMALL_STATE(15)] = 417,
  [SMALL_STATE(16)] = 448,
  [SMALL_STATE(17)] = 479,
  [SMALL_STATE(18)] = 510,
  [SMALL_STATE(19)] = 545,
  [SMALL_STATE(20)] = 576,
  [SMALL_STATE(21)] = 609,
  [SMALL_STATE(22)] = 646,
  [SMALL_STATE(23)] = 685,
  [SMALL_STATE(24)] = 716,
  [SMALL_STATE(25)] = 757,
  [SMALL_STATE(26)] = 798,
  [SMALL_STATE(27)] = 839,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 915,
  [SMALL_STATE(30)] = 953,
  [SMALL_STATE(31)] = 991,
  [SMALL_STATE(32)] = 1029,
  [SMALL_STATE(33)] = 1067,
  [SMALL_STATE(34)] = 1105,
  [SMALL_STATE(35)] = 1143,
  [SMALL_STATE(36)] = 1181,
  [SMALL_STATE(37)] = 1219,
  [SMALL_STATE(38)] = 1247,
  [SMALL_STATE(39)] = 1273,
  [SMALL_STATE(40)] = 1301,
  [SMALL_STATE(41)] = 1324,
  [SMALL_STATE(42)] = 1349,
  [SMALL_STATE(43)] = 1368,
  [SMALL_STATE(44)] = 1382,
  [SMALL_STATE(45)] = 1396,
  [SMALL_STATE(46)] = 1410,
  [SMALL_STATE(47)] = 1424,
  [SMALL_STATE(48)] = 1438,
  [SMALL_STATE(49)] = 1452,
  [SMALL_STATE(50)] = 1466,
  [SMALL_STATE(51)] = 1480,
  [SMALL_STATE(52)] = 1493,
  [SMALL_STATE(53)] = 1506,
  [SMALL_STATE(54)] = 1519,
  [SMALL_STATE(55)] = 1532,
  [SMALL_STATE(56)] = 1536,
  [SMALL_STATE(57)] = 1540,
  [SMALL_STATE(58)] = 1544,
  [SMALL_STATE(59)] = 1548,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_array, 1, .production_id = 4),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_array, 1, .production_id = 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 3),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 3),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_index, 3),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_index, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__index_array, 2, .production_id = 6),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__index_array, 2, .production_id = 6),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 2, .production_id = 2),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 2, .production_id = 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 2),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 2),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_number, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_number, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(2),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 1),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [157] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_StructuredText(void) {
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
