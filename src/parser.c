#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 43
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
  anon_sym_CASE = 2,
  anon_sym_OF = 3,
  anon_sym_END_CASE = 4,
  anon_sym_SEMI = 5,
  anon_sym_ELSE = 6,
  sym_case_value = 7,
  sym_lhs_expression = 8,
  sym_number = 9,
  sym_source_file = 10,
  sym_statement = 11,
  sym_case_statement = 12,
  sym_case = 13,
  sym_else_case = 14,
  sym_assignment = 15,
  aux_sym_source_file_repeat1 = 16,
  aux_sym_case_statement_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_SEMI] = ";",
  [anon_sym_ELSE] = "ELSE",
  [sym_case_value] = "case_value",
  [sym_lhs_expression] = "lhs_expression",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_case_statement] = "case_statement",
  [sym_case] = "case",
  [sym_else_case] = "else_case",
  [sym_assignment] = "assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_END_CASE] = anon_sym_END_CASE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [sym_case_value] = sym_case_value,
  [sym_lhs_expression] = sym_lhs_expression,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_case] = sym_case,
  [sym_else_case] = sym_else_case,
  [sym_assignment] = sym_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
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
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [sym_case_value] = {
    .visible = true,
    .named = true,
  },
  [sym_lhs_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_case_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_CaseControlValue = 1,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_CaseControlValue] = "CaseControlValue",
};

static const TSFieldMapSlice ts_field_map_slices[2] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_CaseControlValue, 1},
};

static TSSymbol ts_alias_sequences[2][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (eof) ADVANCE(12);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == ';') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_case_value);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_lhs_expression);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(21);
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
      if (lookahead == 'C') ADVANCE(1);
      if (lookahead == 'E') ADVANCE(2);
      if (lookahead == 'O') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(4);
      END_STATE();
    case 2:
      if (lookahead == 'L') ADVANCE(5);
      if (lookahead == 'N') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'F') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'S') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'D') ADVANCE(10);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(11);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(13);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 13:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(16);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 7},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 7},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 9},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 7},
  [14] = {.lex_state = 7},
  [15] = {.lex_state = 9},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 9},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 7},
  [23] = {.lex_state = 7},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_END_CASE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym_statement] = STATE(6),
    [sym_case_statement] = STATE(26),
    [sym_assignment] = STATE(26),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CASE] = ACTIONS(5),
    [sym_lhs_expression] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      anon_sym_CASE,
    ACTIONS(14), 1,
      sym_lhs_expression,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(12), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [20] = 5,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_lhs_expression,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(19), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [40] = 5,
    ACTIONS(17), 1,
      anon_sym_CASE,
    ACTIONS(21), 1,
      sym_lhs_expression,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(22), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(23), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [60] = 6,
    ACTIONS(12), 1,
      anon_sym_END_CASE,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_CASE,
    ACTIONS(30), 1,
      sym_lhs_expression,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_case_statement,
      sym_assignment,
  [81] = 5,
    ACTIONS(5), 1,
      anon_sym_CASE,
    ACTIONS(7), 1,
      sym_lhs_expression,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_case_statement,
      sym_assignment,
  [99] = 5,
    ACTIONS(5), 1,
      anon_sym_CASE,
    ACTIONS(7), 1,
      sym_lhs_expression,
    ACTIONS(35), 1,
      anon_sym_END_CASE,
    STATE(8), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_case_statement,
      sym_assignment,
  [117] = 5,
    ACTIONS(5), 1,
      anon_sym_CASE,
    ACTIONS(7), 1,
      sym_lhs_expression,
    ACTIONS(37), 1,
      anon_sym_END_CASE,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(26), 2,
      sym_case_statement,
      sym_assignment,
  [135] = 5,
    ACTIONS(39), 1,
      anon_sym_END_CASE,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      sym_case_value,
    STATE(33), 1,
      sym_else_case,
    STATE(20), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [152] = 5,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      sym_case_value,
    ACTIONS(45), 1,
      anon_sym_END_CASE,
    STATE(39), 1,
      sym_else_case,
    STATE(20), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [169] = 5,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      sym_case_value,
    ACTIONS(47), 1,
      anon_sym_END_CASE,
    STATE(37), 1,
      sym_else_case,
    STATE(10), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [186] = 3,
    ACTIONS(51), 1,
      anon_sym_SEMI,
    ACTIONS(53), 1,
      sym_lhs_expression,
    ACTIONS(49), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [199] = 3,
    ACTIONS(57), 1,
      anon_sym_SEMI,
    ACTIONS(59), 1,
      sym_lhs_expression,
    ACTIONS(55), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [212] = 3,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(65), 1,
      sym_lhs_expression,
    ACTIONS(61), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [225] = 5,
    ACTIONS(41), 1,
      anon_sym_ELSE,
    ACTIONS(43), 1,
      sym_case_value,
    ACTIONS(67), 1,
      anon_sym_END_CASE,
    STATE(32), 1,
      sym_else_case,
    STATE(9), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [242] = 3,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(55), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [254] = 2,
    ACTIONS(59), 1,
      sym_lhs_expression,
    ACTIONS(55), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [264] = 2,
    ACTIONS(73), 1,
      sym_lhs_expression,
    ACTIONS(71), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [274] = 2,
    ACTIONS(53), 1,
      sym_lhs_expression,
    ACTIONS(49), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [284] = 3,
    ACTIONS(77), 1,
      sym_case_value,
    ACTIONS(75), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(20), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [296] = 3,
    ACTIONS(80), 1,
      anon_sym_SEMI,
    ACTIONS(49), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [308] = 2,
    ACTIONS(84), 1,
      sym_lhs_expression,
    ACTIONS(82), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [318] = 2,
    ACTIONS(88), 1,
      sym_lhs_expression,
    ACTIONS(86), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [328] = 3,
    ACTIONS(90), 1,
      anon_sym_SEMI,
    ACTIONS(61), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(65), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [340] = 2,
    ACTIONS(55), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [349] = 2,
    ACTIONS(82), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [358] = 2,
    ACTIONS(49), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(53), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [367] = 2,
    ACTIONS(71), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [376] = 2,
    ACTIONS(86), 2,
      anon_sym_CASE,
      anon_sym_END_CASE,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      sym_lhs_expression,
  [385] = 1,
    ACTIONS(92), 1,
      anon_sym_SEMI,
  [389] = 1,
    ACTIONS(94), 1,
      anon_sym_OF,
  [393] = 1,
    ACTIONS(96), 1,
      anon_sym_END_CASE,
  [397] = 1,
    ACTIONS(98), 1,
      anon_sym_END_CASE,
  [401] = 1,
    ACTIONS(100), 1,
      sym_identifier,
  [405] = 1,
    ACTIONS(102), 1,
      anon_sym_SEMI,
  [409] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [413] = 1,
    ACTIONS(106), 1,
      anon_sym_END_CASE,
  [417] = 1,
    ACTIONS(108), 1,
      sym_number,
  [421] = 1,
    ACTIONS(110), 1,
      anon_sym_END_CASE,
  [425] = 1,
    ACTIONS(112), 1,
      sym_number,
  [429] = 1,
    ACTIONS(114), 1,
      anon_sym_OF,
  [433] = 1,
    ACTIONS(116), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 81,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 117,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 225,
  [SMALL_STATE(16)] = 242,
  [SMALL_STATE(17)] = 254,
  [SMALL_STATE(18)] = 264,
  [SMALL_STATE(19)] = 274,
  [SMALL_STATE(20)] = 284,
  [SMALL_STATE(21)] = 296,
  [SMALL_STATE(22)] = 308,
  [SMALL_STATE(23)] = 318,
  [SMALL_STATE(24)] = 328,
  [SMALL_STATE(25)] = 340,
  [SMALL_STATE(26)] = 349,
  [SMALL_STATE(27)] = 358,
  [SMALL_STATE(28)] = 367,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 385,
  [SMALL_STATE(31)] = 389,
  [SMALL_STATE(32)] = 393,
  [SMALL_STATE(33)] = 397,
  [SMALL_STATE(34)] = 401,
  [SMALL_STATE(35)] = 405,
  [SMALL_STATE(36)] = 409,
  [SMALL_STATE(37)] = 413,
  [SMALL_STATE(38)] = 417,
  [SMALL_STATE(39)] = 421,
  [SMALL_STATE(40)] = 425,
  [SMALL_STATE(41)] = 429,
  [SMALL_STATE(42)] = 433,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [12] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(40),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [49] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(4),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
