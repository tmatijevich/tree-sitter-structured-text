#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 53
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 52
#define ALIAS_COUNT 1
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5

enum {
  sym_identifier = 1,
  anon_sym_PROGRAM = 2,
  anon_sym_END_PROGRAM = 3,
  anon_sym_IF = 4,
  anon_sym_THEN = 5,
  anon_sym_END_IF = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_ACCESS = 8,
  anon_sym_SEMI = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  aux_sym_unary_expression_token1 = 12,
  anon_sym_DASH = 13,
  anon_sym_STAR_STAR = 14,
  anon_sym_STAR = 15,
  anon_sym_SLASH = 16,
  anon_sym_PLUS = 17,
  anon_sym_LT = 18,
  anon_sym_GT = 19,
  anon_sym_LT_EQ = 20,
  anon_sym_GT_EQ = 21,
  anon_sym_EQ = 22,
  anon_sym_LT_GT = 23,
  anon_sym_AND = 24,
  anon_sym_XOR = 25,
  anon_sym_OR = 26,
  anon_sym_LBRACK = 27,
  anon_sym_RBRACK = 28,
  anon_sym_DOT = 29,
  aux_sym_dot_operator_token1 = 30,
  sym_number = 31,
  sym_inline_comment = 32,
  sym_block_comment = 33,
  sym_source_file = 34,
  sym__definition = 35,
  sym_program_definition = 36,
  sym_statement = 37,
  sym__control_statement = 38,
  sym_if_statement = 39,
  sym_assignment = 40,
  sym_expression_statement = 41,
  sym__expression = 42,
  sym_unary_expression = 43,
  sym_binary_expression = 44,
  sym_variable = 45,
  sym__index_array = 46,
  sym_index = 47,
  sym_dot_operator = 48,
  sym__literal = 49,
  aux_sym_source_file_repeat1 = 50,
  aux_sym_program_definition_repeat1 = 51,
  alias_sym_member = 52,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_END_PROGRAM] = "END_PROGRAM",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_END_IF] = "END_IF",
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
  [sym__control_statement] = "_control_statement",
  [sym_if_statement] = "if_statement",
  [sym_assignment] = "assignment",
  [sym_expression_statement] = "expression_statement",
  [sym__expression] = "_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_variable] = "variable",
  [sym__index_array] = "_index_array",
  [sym_index] = "index",
  [sym_dot_operator] = "dot_operator",
  [sym__literal] = "_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [alias_sym_member] = "member",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_END_PROGRAM] = anon_sym_END_PROGRAM,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_END_IF] = anon_sym_END_IF,
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
  [sym__control_statement] = sym__control_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_assignment] = sym_assignment,
  [sym_expression_statement] = sym_expression_statement,
  [sym__expression] = sym__expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_variable] = sym_variable,
  [sym__index_array] = sym__index_array,
  [sym_index] = sym_index,
  [sym_dot_operator] = sym_dot_operator,
  [sym__literal] = sym__literal,
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
  [sym__control_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_if_statement] = {
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
  [alias_sym_member] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_Condition = 1,
  field_dim1 = 2,
  field_dim2 = 3,
  field_name = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_Condition] = "Condition",
  [field_dim1] = "dim1",
  [field_dim2] = "dim2",
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[8] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
  [4] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
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
  [8] =
    {field_Condition, 1},
};

static TSSymbol ts_alias_sequences[8][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(38);
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
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == ')') ADVANCE(15);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(22);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead == '.') ADVANCE(31);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ':') ADVANCE(6);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '=') ADVANCE(27);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '[') ADVANCE(29);
      if (lookahead == ']') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_unary_expression_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_STAR_STAR);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '*') ADVANCE(19);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(25);
      if (lookahead == '>') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(26);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LT_GT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_dot_operator_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(35);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
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
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'O') ADVANCE(4);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == 'X') ADVANCE(7);
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
      if (lookahead == 'N') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'F') ADVANCE(11);
      END_STATE();
    case 4:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 5:
      if (lookahead == 'R') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'O') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_OR);
      END_STATE();
    case 13:
      if (lookahead == 'O') ADVANCE(19);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(20);
      END_STATE();
    case 15:
      if (lookahead == 'R') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_AND);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'G') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'N') ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_XOR);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 26:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 'F') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 'R') ADVANCE(32);
      END_STATE();
    case 29:
      if (lookahead == 'A') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_END_IF);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(34);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'G') ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 36:
      if (lookahead == 'R') ADVANCE(37);
      END_STATE();
    case 37:
      if (lookahead == 'A') ADVANCE(38);
      END_STATE();
    case 38:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 10},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 10},
  [25] = {.lex_state = 10},
  [26] = {.lex_state = 10},
  [27] = {.lex_state = 10},
  [28] = {.lex_state = 10},
  [29] = {.lex_state = 10},
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
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 10},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 10},
  [50] = {.lex_state = 10},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_END_PROGRAM] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
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
    [sym_source_file] = STATE(52),
    [sym__definition] = STATE(47),
    [sym_program_definition] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__index_array] = STATE(5),
    [sym_index] = STATE(3),
    [sym_dot_operator] = STATE(7),
    [anon_sym_THEN] = ACTIONS(9),
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
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(6), 1,
      sym_index,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(19), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(17), 17,
      anon_sym_THEN,
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
  [36] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(23), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(21), 18,
      anon_sym_THEN,
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
  [67] = 5,
    ACTIONS(15), 1,
      anon_sym_DOT,
    STATE(10), 1,
      sym_dot_operator,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(27), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(25), 16,
      anon_sym_THEN,
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
  [102] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(31), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(29), 17,
      anon_sym_THEN,
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
  [132] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(35), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(33), 16,
      anon_sym_THEN,
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
  [161] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(39), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 16,
      anon_sym_THEN,
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
  [190] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(43), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 16,
      anon_sym_THEN,
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
  [219] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(47), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 16,
      anon_sym_THEN,
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
  [248] = 12,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(54), 1,
      anon_sym_IF,
    ACTIONS(57), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(63), 1,
      anon_sym_DASH,
    ACTIONS(66), 1,
      sym_number,
    STATE(24), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(52), 2,
      anon_sym_END_PROGRAM,
      anon_sym_END_IF,
    STATE(11), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(41), 4,
      sym__control_statement,
      sym_if_statement,
      sym_assignment,
      sym_expression_statement,
  [294] = 7,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(69), 9,
      anon_sym_THEN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_LT_GT,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [329] = 12,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(85), 1,
      anon_sym_END_IF,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      sym_number,
    STATE(24), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(41), 4,
      sym__control_statement,
      sym_if_statement,
      sym_assignment,
      sym_expression_statement,
  [374] = 12,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(95), 1,
      anon_sym_END_PROGRAM,
    STATE(24), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(11), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(41), 4,
      sym__control_statement,
      sym_if_statement,
      sym_assignment,
      sym_expression_statement,
  [419] = 5,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 13,
      anon_sym_THEN,
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
  [450] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(97), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 14,
      anon_sym_THEN,
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
  [477] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(101), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(99), 14,
      anon_sym_THEN,
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
  [504] = 4,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(97), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 13,
      anon_sym_THEN,
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
  [533] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(105), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(103), 14,
      anon_sym_THEN,
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
  [560] = 6,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(97), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(69), 11,
      anon_sym_THEN,
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
  [593] = 12,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(107), 1,
      anon_sym_END_PROGRAM,
    STATE(24), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(14), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(41), 4,
      sym__control_statement,
      sym_if_statement,
      sym_assignment,
      sym_expression_statement,
  [638] = 8,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(69), 7,
      anon_sym_THEN,
      anon_sym_SEMI,
      anon_sym_RPAREN,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
      anon_sym_RBRACK,
  [675] = 12,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(83), 1,
      anon_sym_IF,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(111), 1,
      anon_sym_END_IF,
    STATE(24), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(13), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(25), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(41), 4,
      sym__control_statement,
      sym_if_statement,
      sym_assignment,
      sym_expression_statement,
  [720] = 4,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(113), 2,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
    ACTIONS(117), 4,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(115), 11,
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
  [748] = 9,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(121), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [784] = 9,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(121), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [820] = 9,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(125), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(121), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [856] = 9,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(127), 1,
      anon_sym_THEN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(121), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [892] = 9,
    ACTIONS(73), 1,
      anon_sym_STAR_STAR,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(71), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(75), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(77), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(79), 2,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(109), 2,
      anon_sym_EQ,
      anon_sym_LT_GT,
    ACTIONS(121), 3,
      anon_sym_AND,
      anon_sym_XOR,
      anon_sym_OR,
  [928] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(131), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(28), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [955] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(133), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [982] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(135), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(27), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1009] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(137), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(20), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1036] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(139), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(16), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1063] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(141), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(15), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1090] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(143), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(29), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1117] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(145), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(17), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1144] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(147), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(26), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1171] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(149), 1,
      sym_number,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(18), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_variable,
      sym__literal,
  [1198] = 7,
    ACTIONS(81), 1,
      sym_identifier,
    ACTIONS(87), 1,
      anon_sym_LPAREN,
    ACTIONS(89), 1,
      aux_sym_unary_expression_token1,
    ACTIONS(91), 1,
      anon_sym_DASH,
    ACTIONS(151), 1,
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
  [1225] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(155), 2,
      aux_sym_unary_expression_token1,
      sym_number,
    ACTIONS(153), 6,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1242] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(159), 2,
      aux_sym_unary_expression_token1,
      sym_number,
    ACTIONS(157), 6,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1259] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(163), 2,
      aux_sym_unary_expression_token1,
      sym_number,
    ACTIONS(161), 6,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1276] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(167), 2,
      aux_sym_unary_expression_token1,
      sym_number,
    ACTIONS(165), 6,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1293] = 3,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(171), 2,
      aux_sym_unary_expression_token1,
      sym_number,
    ACTIONS(169), 6,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_LPAREN,
      anon_sym_DASH,
      sym_identifier,
  [1310] = 4,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 1,
      anon_sym_PROGRAM,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(46), 3,
      sym__definition,
      sym_program_definition,
      aux_sym_source_file_repeat1,
  [1326] = 4,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(46), 3,
      sym__definition,
      sym_program_definition,
      aux_sym_source_file_repeat1,
  [1342] = 4,
    ACTIONS(180), 1,
      sym_identifier,
    ACTIONS(182), 1,
      aux_sym_dot_operator_token1,
    STATE(9), 1,
      sym_variable,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1356] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(184), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1365] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(186), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [1374] = 2,
    ACTIONS(188), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [1382] = 2,
    ACTIONS(190), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 67,
  [SMALL_STATE(6)] = 102,
  [SMALL_STATE(7)] = 132,
  [SMALL_STATE(8)] = 161,
  [SMALL_STATE(9)] = 190,
  [SMALL_STATE(10)] = 219,
  [SMALL_STATE(11)] = 248,
  [SMALL_STATE(12)] = 294,
  [SMALL_STATE(13)] = 329,
  [SMALL_STATE(14)] = 374,
  [SMALL_STATE(15)] = 419,
  [SMALL_STATE(16)] = 450,
  [SMALL_STATE(17)] = 477,
  [SMALL_STATE(18)] = 504,
  [SMALL_STATE(19)] = 533,
  [SMALL_STATE(20)] = 560,
  [SMALL_STATE(21)] = 593,
  [SMALL_STATE(22)] = 638,
  [SMALL_STATE(23)] = 675,
  [SMALL_STATE(24)] = 720,
  [SMALL_STATE(25)] = 748,
  [SMALL_STATE(26)] = 784,
  [SMALL_STATE(27)] = 820,
  [SMALL_STATE(28)] = 856,
  [SMALL_STATE(29)] = 892,
  [SMALL_STATE(30)] = 928,
  [SMALL_STATE(31)] = 955,
  [SMALL_STATE(32)] = 982,
  [SMALL_STATE(33)] = 1009,
  [SMALL_STATE(34)] = 1036,
  [SMALL_STATE(35)] = 1063,
  [SMALL_STATE(36)] = 1090,
  [SMALL_STATE(37)] = 1117,
  [SMALL_STATE(38)] = 1144,
  [SMALL_STATE(39)] = 1171,
  [SMALL_STATE(40)] = 1198,
  [SMALL_STATE(41)] = 1225,
  [SMALL_STATE(42)] = 1242,
  [SMALL_STATE(43)] = 1259,
  [SMALL_STATE(44)] = 1276,
  [SMALL_STATE(45)] = 1293,
  [SMALL_STATE(46)] = 1310,
  [SMALL_STATE(47)] = 1326,
  [SMALL_STATE(48)] = 1342,
  [SMALL_STATE(49)] = 1356,
  [SMALL_STATE(50)] = 1365,
  [SMALL_STATE(51)] = 1374,
  [SMALL_STATE(52)] = 1382,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 1, .production_id = 2),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 1, .production_id = 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
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
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dot_operator, 2, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable, 3, .production_id = 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable, 3, .production_id = 3),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(36),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(37),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(37),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(25),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [81] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expression_statement, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression_statement, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 7),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 7),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 7),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 7),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [190] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
