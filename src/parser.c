#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
  anon_sym_CASE = 2,
  anon_sym_OF = 3,
  anon_sym_END_CASE = 4,
  anon_sym_SEMI = 5,
  anon_sym_COLON = 6,
  anon_sym_ELSE = 7,
  anon_sym_DOT_DOT = 8,
  anon_sym_COLON_EQ = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym_statement = 12,
  sym_case_statement = 13,
  sym_case = 14,
  sym_else_case = 15,
  sym_case_value = 16,
  sym_case_range = 17,
  sym_assignment = 18,
  aux_sym_source_file_repeat1 = 19,
  aux_sym_case_statement_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_COLON_EQ] = ":=",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_case_statement] = "case_statement",
  [sym_case] = "case",
  [sym_else_case] = "else_case",
  [sym_case_value] = "case_value",
  [sym_case_range] = "case_range",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_case] = sym_case,
  [sym_else_case] = sym_else_case,
  [sym_case_value] = sym_case_value,
  [sym_case_range] = sym_case_range,
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_case_value] = {
    .visible = true,
    .named = true,
  },
  [sym_case_range] = {
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
  field_lower = 2,
  field_upper = 3,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_CaseControlValue] = "CaseControlValue",
  [field_lower] = "lower",
  [field_upper] = "upper",
};

static const TSFieldMapSlice ts_field_map_slices[3] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_CaseControlValue, 1},
  [1] =
    {field_lower, 0},
    {field_upper, 2},
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
      if (eof) ADVANCE(5);
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(2);
      if (lookahead == ':') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(12);
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
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 3},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_END_CASE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(41),
    [sym_statement] = STATE(11),
    [sym_case_statement] = STATE(25),
    [sym_assignment] = STATE(25),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_CASE] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(12), 1,
      anon_sym_CASE,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(15), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_case_statement,
      sym_assignment,
  [22] = 8,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_END_CASE,
    ACTIONS(23), 1,
      anon_sym_ELSE,
    ACTIONS(25), 1,
      sym_number,
    STATE(33), 1,
      sym_case_value,
    STATE(36), 1,
      sym_case_range,
    STATE(45), 1,
      sym_else_case,
    STATE(9), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [48] = 8,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_ELSE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(27), 1,
      anon_sym_END_CASE,
    STATE(33), 1,
      sym_case_value,
    STATE(36), 1,
      sym_case_range,
    STATE(43), 1,
      sym_else_case,
    STATE(3), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [74] = 6,
    ACTIONS(29), 1,
      sym_identifier,
    ACTIONS(32), 1,
      anon_sym_CASE,
    ACTIONS(36), 1,
      sym_number,
    ACTIONS(34), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(6), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_case_statement,
      sym_assignment,
  [96] = 6,
    ACTIONS(32), 1,
      anon_sym_CASE,
    ACTIONS(38), 1,
      sym_identifier,
    ACTIONS(43), 1,
      sym_number,
    ACTIONS(41), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_case_statement,
      sym_assignment,
  [118] = 8,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_ELSE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_END_CASE,
    STATE(33), 1,
      sym_case_value,
    STATE(34), 1,
      sym_else_case,
    STATE(36), 1,
      sym_case_range,
    STATE(8), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [144] = 8,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(23), 1,
      anon_sym_ELSE,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_END_CASE,
    STATE(33), 1,
      sym_case_value,
    STATE(36), 1,
      sym_case_range,
    STATE(40), 1,
      sym_else_case,
    STATE(9), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [170] = 6,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(54), 1,
      sym_number,
    STATE(33), 1,
      sym_case_value,
    STATE(36), 1,
      sym_case_range,
    ACTIONS(52), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(9), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [191] = 5,
    ACTIONS(32), 1,
      anon_sym_CASE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(59), 1,
      anon_sym_END_CASE,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_case_statement,
      sym_assignment,
  [209] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_CASE,
    ACTIONS(61), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(25), 2,
      sym_case_statement,
      sym_assignment,
  [227] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(66), 1,
      anon_sym_CASE,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(25), 2,
      sym_case_statement,
      sym_assignment,
  [245] = 5,
    ACTIONS(32), 1,
      anon_sym_CASE,
    ACTIONS(57), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_END_CASE,
    STATE(10), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(18), 2,
      sym_case_statement,
      sym_assignment,
  [263] = 3,
    ACTIONS(73), 1,
      anon_sym_SEMI,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(71), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [276] = 3,
    ACTIONS(79), 1,
      anon_sym_SEMI,
    ACTIONS(81), 1,
      sym_number,
    ACTIONS(77), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [289] = 3,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(83), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [302] = 2,
    ACTIONS(91), 1,
      sym_number,
    ACTIONS(89), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [312] = 2,
    ACTIONS(95), 1,
      sym_number,
    ACTIONS(93), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [322] = 2,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(97), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [332] = 2,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(83), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [342] = 2,
    ACTIONS(75), 1,
      sym_number,
    ACTIONS(71), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [352] = 3,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 1,
      anon_sym_SEMI,
    ACTIONS(77), 2,
      anon_sym_CASE,
      sym_identifier,
  [363] = 3,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_SEMI,
    ACTIONS(71), 2,
      anon_sym_CASE,
      sym_identifier,
  [374] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 1,
      anon_sym_SEMI,
    ACTIONS(83), 2,
      anon_sym_CASE,
      sym_identifier,
  [385] = 2,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(93), 2,
      anon_sym_CASE,
      sym_identifier,
  [393] = 2,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 2,
      anon_sym_CASE,
      sym_identifier,
  [401] = 2,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 2,
      anon_sym_CASE,
      sym_identifier,
  [409] = 2,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(71), 2,
      anon_sym_CASE,
      sym_identifier,
  [417] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 2,
      anon_sym_CASE,
      sym_identifier,
  [425] = 2,
    ACTIONS(107), 1,
      anon_sym_COLON,
    ACTIONS(109), 1,
      anon_sym_DOT_DOT,
  [432] = 1,
    ACTIONS(111), 1,
      anon_sym_COLON,
  [436] = 1,
    ACTIONS(113), 1,
      sym_identifier,
  [440] = 1,
    ACTIONS(115), 1,
      anon_sym_COLON,
  [444] = 1,
    ACTIONS(117), 1,
      anon_sym_END_CASE,
  [448] = 1,
    ACTIONS(119), 1,
      sym_number,
  [452] = 1,
    ACTIONS(107), 1,
      anon_sym_COLON,
  [456] = 1,
    ACTIONS(121), 1,
      anon_sym_SEMI,
  [460] = 1,
    ACTIONS(123), 1,
      sym_number,
  [464] = 1,
    ACTIONS(125), 1,
      anon_sym_OF,
  [468] = 1,
    ACTIONS(127), 1,
      anon_sym_END_CASE,
  [472] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [476] = 1,
    ACTIONS(131), 1,
      anon_sym_SEMI,
  [480] = 1,
    ACTIONS(133), 1,
      anon_sym_END_CASE,
  [484] = 1,
    ACTIONS(135), 1,
      anon_sym_COLON_EQ,
  [488] = 1,
    ACTIONS(137), 1,
      anon_sym_END_CASE,
  [492] = 1,
    ACTIONS(139), 1,
      anon_sym_OF,
  [496] = 1,
    ACTIONS(141), 1,
      sym_number,
  [500] = 1,
    ACTIONS(143), 1,
      sym_identifier,
  [504] = 1,
    ACTIONS(145), 1,
      anon_sym_COLON_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 74,
  [SMALL_STATE(6)] = 96,
  [SMALL_STATE(7)] = 118,
  [SMALL_STATE(8)] = 144,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 191,
  [SMALL_STATE(11)] = 209,
  [SMALL_STATE(12)] = 227,
  [SMALL_STATE(13)] = 245,
  [SMALL_STATE(14)] = 263,
  [SMALL_STATE(15)] = 276,
  [SMALL_STATE(16)] = 289,
  [SMALL_STATE(17)] = 302,
  [SMALL_STATE(18)] = 312,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 332,
  [SMALL_STATE(21)] = 342,
  [SMALL_STATE(22)] = 352,
  [SMALL_STATE(23)] = 363,
  [SMALL_STATE(24)] = 374,
  [SMALL_STATE(25)] = 385,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 401,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 417,
  [SMALL_STATE(30)] = 425,
  [SMALL_STATE(31)] = 432,
  [SMALL_STATE(32)] = 436,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 444,
  [SMALL_STATE(35)] = 448,
  [SMALL_STATE(36)] = 452,
  [SMALL_STATE(37)] = 456,
  [SMALL_STATE(38)] = 460,
  [SMALL_STATE(39)] = 464,
  [SMALL_STATE(40)] = 468,
  [SMALL_STATE(41)] = 472,
  [SMALL_STATE(42)] = 476,
  [SMALL_STATE(43)] = 480,
  [SMALL_STATE(44)] = 484,
  [SMALL_STATE(45)] = 488,
  [SMALL_STATE(46)] = 492,
  [SMALL_STATE(47)] = 496,
  [SMALL_STATE(48)] = 500,
  [SMALL_STATE(49)] = 504,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 2), SHIFT(49),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 3), SHIFT(49),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(36),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(30),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(44),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_range, 3, .production_id = 2),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
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
