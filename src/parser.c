#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 63
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
  anon_sym_COLON_EQ = 8,
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
  [anon_sym_COLON_EQ] = ":=",
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
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
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
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
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
      if (eof) ADVANCE(7);
      if (lookahead == ':') ADVANCE(5);
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ';') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(1);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 6:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(3);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_case_value);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == ':') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(14);
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
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 4},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 4},
  [13] = {.lex_state = 4},
  [14] = {.lex_state = 4},
  [15] = {.lex_state = 4},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 4},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
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
  [43] = {.lex_state = 0},
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
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_statement] = STATE(6),
    [sym_case_statement] = STATE(38),
    [sym_assignment] = STATE(38),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_CASE] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_CASE,
    ACTIONS(15), 1,
      sym_case_value,
    ACTIONS(13), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(4), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 2,
      sym_case_statement,
      sym_assignment,
  [22] = 6,
    ACTIONS(17), 1,
      sym_identifier,
    ACTIONS(20), 1,
      anon_sym_CASE,
    ACTIONS(25), 1,
      sym_case_value,
    ACTIONS(23), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 2,
      sym_case_statement,
      sym_assignment,
  [44] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_CASE,
    ACTIONS(29), 1,
      sym_case_value,
    ACTIONS(27), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(24), 2,
      sym_case_statement,
      sym_assignment,
  [66] = 5,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_CASE,
    ACTIONS(35), 1,
      anon_sym_END_CASE,
    STATE(9), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(40), 2,
      sym_case_statement,
      sym_assignment,
  [84] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_CASE,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 2,
      sym_case_statement,
      sym_assignment,
  [102] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_CASE,
    STATE(7), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(38), 2,
      sym_case_statement,
      sym_assignment,
  [120] = 5,
    ACTIONS(31), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_CASE,
    ACTIONS(45), 1,
      anon_sym_END_CASE,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(40), 2,
      sym_case_statement,
      sym_assignment,
  [138] = 5,
    ACTIONS(23), 1,
      anon_sym_END_CASE,
    ACTIONS(47), 1,
      sym_identifier,
    ACTIONS(50), 1,
      anon_sym_CASE,
    STATE(9), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(40), 2,
      sym_case_statement,
      sym_assignment,
  [156] = 5,
    ACTIONS(53), 1,
      anon_sym_END_CASE,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(57), 1,
      sym_case_value,
    STATE(54), 1,
      sym_else_case,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [173] = 5,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(57), 1,
      sym_case_value,
    ACTIONS(59), 1,
      anon_sym_END_CASE,
    STATE(42), 1,
      sym_else_case,
    STATE(10), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [190] = 5,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(57), 1,
      sym_case_value,
    ACTIONS(61), 1,
      anon_sym_END_CASE,
    STATE(49), 1,
      sym_else_case,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [207] = 5,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(57), 1,
      sym_case_value,
    ACTIONS(63), 1,
      anon_sym_END_CASE,
    STATE(47), 1,
      sym_else_case,
    STATE(12), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [224] = 3,
    ACTIONS(67), 1,
      anon_sym_SEMI,
    ACTIONS(69), 1,
      sym_case_value,
    ACTIONS(65), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [237] = 5,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(57), 1,
      sym_case_value,
    ACTIONS(71), 1,
      anon_sym_END_CASE,
    STATE(48), 1,
      sym_else_case,
    STATE(18), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [254] = 3,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(77), 1,
      sym_case_value,
    ACTIONS(73), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [267] = 3,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    ACTIONS(83), 1,
      sym_case_value,
    ACTIONS(79), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [280] = 5,
    ACTIONS(55), 1,
      anon_sym_ELSE,
    ACTIONS(57), 1,
      sym_case_value,
    ACTIONS(85), 1,
      anon_sym_END_CASE,
    STATE(46), 1,
      sym_else_case,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [297] = 2,
    ACTIONS(89), 1,
      sym_case_value,
    ACTIONS(87), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [307] = 2,
    ACTIONS(69), 1,
      sym_case_value,
    ACTIONS(65), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [317] = 3,
    ACTIONS(93), 1,
      sym_case_value,
    ACTIONS(91), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [329] = 2,
    ACTIONS(77), 1,
      sym_case_value,
    ACTIONS(73), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [339] = 2,
    ACTIONS(98), 1,
      sym_case_value,
    ACTIONS(96), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [349] = 2,
    ACTIONS(102), 1,
      sym_case_value,
    ACTIONS(100), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [359] = 2,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(73), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [368] = 3,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(106), 1,
      anon_sym_SEMI,
    ACTIONS(73), 2,
      anon_sym_CASE,
      sym_identifier,
  [379] = 3,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(79), 2,
      anon_sym_CASE,
      sym_identifier,
  [390] = 3,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_SEMI,
    ACTIONS(65), 2,
      anon_sym_CASE,
      sym_identifier,
  [401] = 2,
    ACTIONS(112), 1,
      anon_sym_SEMI,
    ACTIONS(79), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [410] = 2,
    ACTIONS(114), 1,
      anon_sym_SEMI,
    ACTIONS(65), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [419] = 1,
    ACTIONS(96), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [425] = 2,
    ACTIONS(89), 1,
      ts_builtin_sym_end,
    ACTIONS(87), 2,
      anon_sym_CASE,
      sym_identifier,
  [433] = 1,
    ACTIONS(65), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [439] = 1,
    ACTIONS(73), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [445] = 1,
    ACTIONS(87), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [451] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 2,
      anon_sym_CASE,
      sym_identifier,
  [459] = 2,
    ACTIONS(98), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 2,
      anon_sym_CASE,
      sym_identifier,
  [467] = 2,
    ACTIONS(102), 1,
      ts_builtin_sym_end,
    ACTIONS(100), 2,
      anon_sym_CASE,
      sym_identifier,
  [475] = 2,
    ACTIONS(69), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 2,
      anon_sym_CASE,
      sym_identifier,
  [483] = 1,
    ACTIONS(100), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [489] = 1,
    ACTIONS(116), 1,
      anon_sym_SEMI,
  [493] = 1,
    ACTIONS(118), 1,
      anon_sym_END_CASE,
  [497] = 1,
    ACTIONS(120), 1,
      anon_sym_SEMI,
  [501] = 1,
    ACTIONS(122), 1,
      sym_number,
  [505] = 1,
    ACTIONS(124), 1,
      anon_sym_OF,
  [509] = 1,
    ACTIONS(126), 1,
      anon_sym_END_CASE,
  [513] = 1,
    ACTIONS(128), 1,
      anon_sym_END_CASE,
  [517] = 1,
    ACTIONS(130), 1,
      anon_sym_END_CASE,
  [521] = 1,
    ACTIONS(132), 1,
      anon_sym_END_CASE,
  [525] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [529] = 1,
    ACTIONS(136), 1,
      anon_sym_SEMI,
  [533] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [537] = 1,
    ACTIONS(140), 1,
      anon_sym_COLON_EQ,
  [541] = 1,
    ACTIONS(142), 1,
      anon_sym_END_CASE,
  [545] = 1,
    ACTIONS(144), 1,
      anon_sym_OF,
  [549] = 1,
    ACTIONS(146), 1,
      sym_number,
  [553] = 1,
    ACTIONS(148), 1,
      anon_sym_OF,
  [557] = 1,
    ACTIONS(150), 1,
      sym_number,
  [561] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [565] = 1,
    ACTIONS(154), 1,
      anon_sym_COLON_EQ,
  [569] = 1,
    ACTIONS(156), 1,
      sym_identifier,
  [573] = 1,
    ACTIONS(158), 1,
      anon_sym_COLON_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 120,
  [SMALL_STATE(9)] = 138,
  [SMALL_STATE(10)] = 156,
  [SMALL_STATE(11)] = 173,
  [SMALL_STATE(12)] = 190,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 224,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 254,
  [SMALL_STATE(17)] = 267,
  [SMALL_STATE(18)] = 280,
  [SMALL_STATE(19)] = 297,
  [SMALL_STATE(20)] = 307,
  [SMALL_STATE(21)] = 317,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 339,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 359,
  [SMALL_STATE(26)] = 368,
  [SMALL_STATE(27)] = 379,
  [SMALL_STATE(28)] = 390,
  [SMALL_STATE(29)] = 401,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 419,
  [SMALL_STATE(32)] = 425,
  [SMALL_STATE(33)] = 433,
  [SMALL_STATE(34)] = 439,
  [SMALL_STATE(35)] = 445,
  [SMALL_STATE(36)] = 451,
  [SMALL_STATE(37)] = 459,
  [SMALL_STATE(38)] = 467,
  [SMALL_STATE(39)] = 475,
  [SMALL_STATE(40)] = 483,
  [SMALL_STATE(41)] = 489,
  [SMALL_STATE(42)] = 493,
  [SMALL_STATE(43)] = 497,
  [SMALL_STATE(44)] = 501,
  [SMALL_STATE(45)] = 505,
  [SMALL_STATE(46)] = 509,
  [SMALL_STATE(47)] = 513,
  [SMALL_STATE(48)] = 517,
  [SMALL_STATE(49)] = 521,
  [SMALL_STATE(50)] = 525,
  [SMALL_STATE(51)] = 529,
  [SMALL_STATE(52)] = 533,
  [SMALL_STATE(53)] = 537,
  [SMALL_STATE(54)] = 541,
  [SMALL_STATE(55)] = 545,
  [SMALL_STATE(56)] = 549,
  [SMALL_STATE(57)] = 553,
  [SMALL_STATE(58)] = 557,
  [SMALL_STATE(59)] = 561,
  [SMALL_STATE(60)] = 565,
  [SMALL_STATE(61)] = 569,
  [SMALL_STATE(62)] = 573,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 1),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(59),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(2),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
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
