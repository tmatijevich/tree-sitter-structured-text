#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 45
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 35
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
  anon_sym_PROGRAM = 2,
  anon_sym_END_PROGRAM = 3,
  anon_sym_CASE = 4,
  anon_sym_OF = 5,
  anon_sym_END_CASE = 6,
  anon_sym_SEMI = 7,
  anon_sym_COLON_EQ = 8,
  anon_sym_ACCESS = 9,
  anon_sym_COLON = 10,
  anon_sym_ELSE = 11,
  aux_sym_case_value_token1 = 12,
  aux_sym_case_value_token2 = 13,
  anon_sym_COMMA = 14,
  sym_number = 15,
  sym_inline_comment = 16,
  sym_block_comment = 17,
  sym_source_file = 18,
  sym__definition = 19,
  sym_program_definition = 20,
  sym_statement = 21,
  sym__control_statement = 22,
  sym_case_statement = 23,
  sym_assignment = 24,
  sym_case_body = 25,
  sym_case_else_clause = 26,
  sym_case_value = 27,
  sym__expression = 28,
  sym__literal = 29,
  aux_sym_source_file_repeat1 = 30,
  aux_sym_program_definition_repeat1 = 31,
  aux_sym_case_body_repeat1 = 32,
  aux_sym_case_body_repeat2 = 33,
  aux_sym_case_value_repeat1 = 34,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_END_PROGRAM] = "END_PROGRAM",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_ACCESS] = "ACCESS",
  [anon_sym_COLON] = ":",
  [anon_sym_ELSE] = "ELSE",
  [aux_sym_case_value_token1] = "case_value_token1",
  [aux_sym_case_value_token2] = "case_value_token2",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_END_CASE] = anon_sym_END_CASE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_ACCESS] = anon_sym_ACCESS,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [aux_sym_case_value_token1] = aux_sym_case_value_token1,
  [aux_sym_case_value_token2] = aux_sym_case_value_token2,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_COLON] = {
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
  [aux_sym_case_value_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
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
    .supertype = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
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

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_CaseControlValue, 1},
};

static TSSymbol ts_alias_sequences[3][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(20);
      if (lookahead == ';') ADVANCE(17);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(19);
      if (lookahead == ';') ADVANCE(17);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(4);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(30);
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
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 10:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(22);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_case_value_token1);
      if (lookahead == '.') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_case_value_token1);
      if (lookahead == '.') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_case_value_token2);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(25);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(27);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(9);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_inline_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
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
      if (lookahead == 'O') ADVANCE(4);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'C') ADVANCE(6);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 3:
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == 'R') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(12);
      END_STATE();
    case 7:
      if (lookahead == 'S') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(15);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 11:
      if (lookahead == 'O') ADVANCE(16);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == 'G') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(23);
      if (lookahead == 'P') ADVANCE(24);
      END_STATE();
    case 21:
      if (lookahead == 'R') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'S') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 'A') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ACCESS);
      END_STATE();
    case 27:
      if (lookahead == 'S') ADVANCE(30);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(32);
      END_STATE();
    case 30:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'G') ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'A') ADVANCE(36);
      END_STATE();
    case 36:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_END_PROGRAM] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_END_CASE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_ACCESS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [aux_sym_case_value_token1] = ACTIONS(1),
    [aux_sym_case_value_token2] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(44),
    [sym__definition] = STATE(23),
    [sym_program_definition] = STATE(36),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_PROGRAM] = ACTIONS(7),
    [sym_inline_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(12), 1,
      anon_sym_CASE,
    ACTIONS(17), 1,
      aux_sym_case_value_token2,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_case_body_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(15), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
  [30] = 7,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(23), 1,
      aux_sym_case_value_token2,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(2), 2,
      sym_statement,
      aux_sym_case_body_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(19), 4,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [58] = 8,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(30), 1,
      aux_sym_case_value_token2,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(3), 2,
      sym_statement,
      aux_sym_case_body_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(28), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
  [88] = 9,
    ACTIONS(34), 1,
      anon_sym_END_CASE,
    ACTIONS(36), 1,
      anon_sym_ELSE,
    ACTIONS(38), 1,
      aux_sym_case_value_token2,
    STATE(15), 1,
      aux_sym_case_body_repeat2,
    STATE(28), 1,
      sym_case_body,
    STATE(40), 1,
      sym_case_value,
    STATE(41), 1,
      sym_case_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(32), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [118] = 7,
    ACTIONS(40), 1,
      sym_identifier,
    ACTIONS(45), 1,
      anon_sym_CASE,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(43), 2,
      anon_sym_END_PROGRAM,
      anon_sym_END_CASE,
    STATE(6), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
  [144] = 4,
    ACTIONS(50), 1,
      anon_sym_SEMI,
    ACTIONS(52), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(48), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [163] = 7,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(56), 1,
      anon_sym_END_PROGRAM,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(13), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
  [188] = 4,
    ACTIONS(60), 1,
      anon_sym_SEMI,
    ACTIONS(62), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(58), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [207] = 7,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(64), 1,
      anon_sym_END_CASE,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(6), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
  [232] = 7,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_END_CASE,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(10), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
  [257] = 4,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(68), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [276] = 7,
    ACTIONS(21), 1,
      anon_sym_CASE,
    ACTIONS(54), 1,
      sym_identifier,
    ACTIONS(74), 1,
      anon_sym_END_PROGRAM,
    STATE(16), 1,
      sym_case_statement,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(6), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(14), 2,
      sym__control_statement,
      sym_assignment,
  [301] = 3,
    ACTIONS(78), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(76), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [317] = 6,
    ACTIONS(38), 1,
      aux_sym_case_value_token2,
    STATE(19), 1,
      aux_sym_case_body_repeat2,
    STATE(40), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(32), 2,
      aux_sym_case_value_token1,
      sym_identifier,
    ACTIONS(80), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
  [339] = 3,
    ACTIONS(84), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(82), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [355] = 3,
    ACTIONS(88), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(86), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [371] = 3,
    ACTIONS(52), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(48), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [387] = 6,
    ACTIONS(93), 1,
      aux_sym_case_value_token2,
    STATE(19), 1,
      aux_sym_case_body_repeat2,
    STATE(40), 1,
      sym_case_value,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(28), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    ACTIONS(90), 2,
      aux_sym_case_value_token1,
      sym_identifier,
  [409] = 3,
    ACTIONS(62), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(58), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [425] = 3,
    ACTIONS(98), 1,
      aux_sym_case_value_token2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(96), 6,
      anon_sym_END_PROGRAM,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      aux_sym_case_value_token1,
      sym_identifier,
  [441] = 5,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_PROGRAM,
    STATE(36), 1,
      sym_program_definition,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [459] = 5,
    ACTIONS(7), 1,
      anon_sym_PROGRAM,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_program_definition,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    STATE(22), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [477] = 5,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(37), 1,
      sym__literal,
    STATE(42), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [494] = 5,
    ACTIONS(107), 1,
      sym_identifier,
    ACTIONS(109), 1,
      sym_number,
    STATE(37), 1,
      sym__literal,
    STATE(38), 1,
      sym__expression,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [511] = 4,
    ACTIONS(111), 1,
      anon_sym_COLON,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [525] = 4,
    ACTIONS(116), 1,
      anon_sym_COLON,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [539] = 4,
    ACTIONS(120), 1,
      anon_sym_END_CASE,
    ACTIONS(122), 1,
      anon_sym_ELSE,
    STATE(39), 1,
      sym_case_else_clause,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [553] = 4,
    ACTIONS(118), 1,
      anon_sym_COMMA,
    ACTIONS(124), 1,
      anon_sym_COLON,
    STATE(26), 1,
      aux_sym_case_value_repeat1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [567] = 3,
    ACTIONS(128), 1,
      aux_sym_case_value_token1,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(126), 2,
      aux_sym_case_value_token2,
      sym_identifier,
  [579] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(111), 2,
      anon_sym_COLON,
      anon_sym_COMMA,
  [588] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(130), 2,
      anon_sym_OF,
      anon_sym_SEMI,
  [597] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [606] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(134), 2,
      anon_sym_COLON_EQ,
      anon_sym_ACCESS,
  [615] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [624] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [633] = 2,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
    ACTIONS(140), 2,
      anon_sym_OF,
      anon_sym_SEMI,
  [642] = 2,
    ACTIONS(142), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [650] = 2,
    ACTIONS(144), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [658] = 2,
    ACTIONS(146), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [666] = 2,
    ACTIONS(120), 1,
      anon_sym_END_CASE,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [674] = 2,
    ACTIONS(148), 1,
      anon_sym_OF,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [682] = 2,
    ACTIONS(150), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
  [690] = 2,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_inline_comment,
      sym_block_comment,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 144,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 188,
  [SMALL_STATE(10)] = 207,
  [SMALL_STATE(11)] = 232,
  [SMALL_STATE(12)] = 257,
  [SMALL_STATE(13)] = 276,
  [SMALL_STATE(14)] = 301,
  [SMALL_STATE(15)] = 317,
  [SMALL_STATE(16)] = 339,
  [SMALL_STATE(17)] = 355,
  [SMALL_STATE(18)] = 371,
  [SMALL_STATE(19)] = 387,
  [SMALL_STATE(20)] = 409,
  [SMALL_STATE(21)] = 425,
  [SMALL_STATE(22)] = 441,
  [SMALL_STATE(23)] = 459,
  [SMALL_STATE(24)] = 477,
  [SMALL_STATE(25)] = 494,
  [SMALL_STATE(26)] = 511,
  [SMALL_STATE(27)] = 525,
  [SMALL_STATE(28)] = 539,
  [SMALL_STATE(29)] = 553,
  [SMALL_STATE(30)] = 567,
  [SMALL_STATE(31)] = 579,
  [SMALL_STATE(32)] = 588,
  [SMALL_STATE(33)] = 597,
  [SMALL_STATE(34)] = 606,
  [SMALL_STATE(35)] = 615,
  [SMALL_STATE(36)] = 624,
  [SMALL_STATE(37)] = 633,
  [SMALL_STATE(38)] = 642,
  [SMALL_STATE(39)] = 650,
  [SMALL_STATE(40)] = 658,
  [SMALL_STATE(41)] = 666,
  [SMALL_STATE(42)] = 674,
  [SMALL_STATE(43)] = 682,
  [SMALL_STATE(44)] = 690,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(34),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2), SHIFT_REPEAT(24),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 3),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat2, 3),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 2), SHIFT_REPEAT(34),
  [28] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_body_repeat2, 2),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(34),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(24),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_else_clause, 2),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_else_clause, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_body, 1),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_statement, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_statement, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 2),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_body_repeat2, 2), SHIFT_REPEAT(27),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_body_repeat2, 2), SHIFT_REPEAT(27),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_value_repeat1, 2), SHIFT_REPEAT(30),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 2),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [152] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
