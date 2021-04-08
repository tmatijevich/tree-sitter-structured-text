#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 68
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 21
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  anon_sym_CASE = 1,
  anon_sym_OF = 2,
  anon_sym_END_CASE = 3,
  anon_sym_SEMI = 4,
  anon_sym_COLON = 5,
  anon_sym_ELSE = 6,
  anon_sym_DOT_DOT = 7,
  anon_sym_COLON_EQ = 8,
  sym_identifier = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym_statement = 12,
  sym_case_statement = 13,
  sym_case = 14,
  sym_else_case = 15,
  sym_case_value = 16,
  sym_assignment = 17,
  aux_sym_source_file_repeat1 = 18,
  aux_sym_case_statement_repeat1 = 19,
  aux_sym_case_repeat1 = 20,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_COLON_EQ] = ":=",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym_statement] = "statement",
  [sym_case_statement] = "case_statement",
  [sym_case] = "case",
  [sym_else_case] = "else_case",
  [sym_case_value] = "case_value",
  [sym_assignment] = "assignment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
  [aux_sym_case_repeat1] = "case_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_END_CASE] = anon_sym_END_CASE,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym_statement] = sym_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_case] = sym_case,
  [sym_else_case] = sym_else_case,
  [sym_case_value] = sym_case_value,
  [sym_assignment] = sym_assignment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_case_statement_repeat1] = aux_sym_case_statement_repeat1,
  [aux_sym_case_repeat1] = aux_sym_case_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
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
  [sym_identifier] = {
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
  [sym_case_value] = {
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
  [aux_sym_case_repeat1] = {
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
      if (eof) ADVANCE(21);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(5);
      if (lookahead == 'E') ADVANCE(14);
      if (lookahead == 'O') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(32);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == 'E') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(24);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(16);
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'S') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'S') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'S') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(19)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '.') ADVANCE(1);
      if (lookahead == ':') ADVANCE(28);
      if (lookahead == ';') ADVANCE(27);
      if (lookahead == 'C') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(33);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(44);
      if (lookahead == 'N') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 12},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 20},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 12},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 20},
  [26] = {.lex_state = 20},
  [27] = {.lex_state = 20},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 20},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 20},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 19},
  [44] = {.lex_state = 20},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 20},
  [48] = {.lex_state = 20},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 19},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 19},
  [67] = {.lex_state = 2},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
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
    [sym_source_file] = STATE(55),
    [sym_statement] = STATE(11),
    [sym_case_statement] = STATE(33),
    [sym_assignment] = STATE(33),
    [aux_sym_source_file_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_CASE] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_CASE,
    ACTIONS(14), 1,
      sym_identifier,
    ACTIONS(17), 1,
      sym_number,
    ACTIONS(12), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(2), 2,
      sym_statement,
      aux_sym_case_repeat1,
    STATE(22), 2,
      sym_case_statement,
      sym_assignment,
  [22] = 6,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(23), 1,
      sym_identifier,
    ACTIONS(25), 1,
      sym_number,
    ACTIONS(21), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(4), 2,
      sym_statement,
      aux_sym_case_repeat1,
    STATE(22), 2,
      sym_case_statement,
      sym_assignment,
  [44] = 5,
    ACTIONS(19), 1,
      anon_sym_CASE,
    ACTIONS(29), 1,
      sym_number,
    STATE(2), 2,
      sym_statement,
      aux_sym_case_repeat1,
    STATE(22), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(27), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [64] = 7,
    ACTIONS(31), 1,
      anon_sym_END_CASE,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    STATE(45), 1,
      sym_else_case,
    STATE(47), 1,
      sym_case_value,
    STATE(16), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [87] = 7,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(39), 1,
      anon_sym_END_CASE,
    STATE(47), 1,
      sym_case_value,
    STATE(52), 1,
      sym_else_case,
    STATE(9), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [110] = 7,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(41), 1,
      anon_sym_END_CASE,
    STATE(42), 1,
      sym_else_case,
    STATE(47), 1,
      sym_case_value,
    STATE(5), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [133] = 7,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(43), 1,
      anon_sym_END_CASE,
    STATE(47), 1,
      sym_case_value,
    STATE(59), 1,
      sym_else_case,
    STATE(16), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [156] = 7,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(45), 1,
      anon_sym_END_CASE,
    STATE(47), 1,
      sym_case_value,
    STATE(54), 1,
      sym_else_case,
    STATE(16), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [179] = 7,
    ACTIONS(33), 1,
      anon_sym_ELSE,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(37), 1,
      sym_number,
    ACTIONS(47), 1,
      anon_sym_END_CASE,
    STATE(47), 1,
      sym_case_value,
    STATE(57), 1,
      sym_else_case,
    STATE(8), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [202] = 5,
    ACTIONS(5), 1,
      anon_sym_CASE,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_case_statement,
      sym_assignment,
  [220] = 5,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_CASE,
    ACTIONS(56), 1,
      sym_identifier,
    STATE(12), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_case_statement,
      sym_assignment,
  [238] = 5,
    ACTIONS(59), 1,
      anon_sym_CASE,
    ACTIONS(61), 1,
      anon_sym_END_CASE,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(15), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(36), 2,
      sym_case_statement,
      sym_assignment,
  [256] = 5,
    ACTIONS(65), 1,
      anon_sym_CASE,
    ACTIONS(68), 1,
      anon_sym_END_CASE,
    ACTIONS(70), 1,
      sym_identifier,
    STATE(14), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(36), 2,
      sym_case_statement,
      sym_assignment,
  [274] = 5,
    ACTIONS(59), 1,
      anon_sym_CASE,
    ACTIONS(63), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_END_CASE,
    STATE(14), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(36), 2,
      sym_case_statement,
      sym_assignment,
  [292] = 5,
    ACTIONS(77), 1,
      sym_identifier,
    ACTIONS(80), 1,
      sym_number,
    STATE(47), 1,
      sym_case_value,
    ACTIONS(75), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(16), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [310] = 3,
    ACTIONS(85), 1,
      anon_sym_SEMI,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(83), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [323] = 3,
    ACTIONS(91), 1,
      anon_sym_SEMI,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(89), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [336] = 3,
    ACTIONS(97), 1,
      anon_sym_SEMI,
    ACTIONS(99), 1,
      sym_number,
    ACTIONS(95), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [349] = 2,
    ACTIONS(103), 1,
      sym_number,
    ACTIONS(101), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [359] = 2,
    ACTIONS(87), 1,
      sym_number,
    ACTIONS(83), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [369] = 2,
    ACTIONS(107), 1,
      sym_number,
    ACTIONS(105), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [379] = 2,
    ACTIONS(93), 1,
      sym_number,
    ACTIONS(89), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [389] = 2,
    ACTIONS(111), 1,
      sym_number,
    ACTIONS(109), 4,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_identifier,
  [399] = 3,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(113), 1,
      anon_sym_SEMI,
    ACTIONS(83), 2,
      anon_sym_CASE,
      sym_identifier,
  [410] = 3,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(115), 1,
      anon_sym_SEMI,
    ACTIONS(89), 2,
      anon_sym_CASE,
      sym_identifier,
  [421] = 3,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
    ACTIONS(117), 1,
      anon_sym_SEMI,
    ACTIONS(95), 2,
      anon_sym_CASE,
      sym_identifier,
  [432] = 2,
    ACTIONS(119), 1,
      anon_sym_SEMI,
    ACTIONS(95), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [441] = 2,
    ACTIONS(121), 1,
      anon_sym_SEMI,
    ACTIONS(89), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [450] = 2,
    ACTIONS(123), 1,
      anon_sym_SEMI,
    ACTIONS(83), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [459] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 2,
      anon_sym_CASE,
      sym_identifier,
  [467] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 2,
      anon_sym_CASE,
      sym_identifier,
  [475] = 2,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
    ACTIONS(105), 2,
      anon_sym_CASE,
      sym_identifier,
  [483] = 2,
    ACTIONS(111), 1,
      ts_builtin_sym_end,
    ACTIONS(109), 2,
      anon_sym_CASE,
      sym_identifier,
  [491] = 2,
    ACTIONS(103), 1,
      ts_builtin_sym_end,
    ACTIONS(101), 2,
      anon_sym_CASE,
      sym_identifier,
  [499] = 1,
    ACTIONS(105), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [505] = 1,
    ACTIONS(109), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [511] = 1,
    ACTIONS(89), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [517] = 1,
    ACTIONS(83), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [523] = 1,
    ACTIONS(101), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [529] = 2,
    ACTIONS(125), 1,
      anon_sym_COLON,
    ACTIONS(127), 1,
      anon_sym_DOT_DOT,
  [536] = 1,
    ACTIONS(129), 1,
      anon_sym_END_CASE,
  [540] = 1,
    ACTIONS(131), 1,
      sym_identifier,
  [544] = 1,
    ACTIONS(133), 1,
      anon_sym_COLON,
  [548] = 1,
    ACTIONS(135), 1,
      anon_sym_END_CASE,
  [552] = 1,
    ACTIONS(137), 1,
      sym_number,
  [556] = 1,
    ACTIONS(139), 1,
      anon_sym_COLON,
  [560] = 1,
    ACTIONS(125), 1,
      anon_sym_COLON,
  [564] = 1,
    ACTIONS(141), 1,
      anon_sym_SEMI,
  [568] = 1,
    ACTIONS(143), 1,
      sym_number,
  [572] = 1,
    ACTIONS(145), 1,
      anon_sym_SEMI,
  [576] = 1,
    ACTIONS(147), 1,
      anon_sym_END_CASE,
  [580] = 1,
    ACTIONS(149), 1,
      anon_sym_OF,
  [584] = 1,
    ACTIONS(151), 1,
      anon_sym_END_CASE,
  [588] = 1,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [592] = 1,
    ACTIONS(155), 1,
      anon_sym_SEMI,
  [596] = 1,
    ACTIONS(157), 1,
      anon_sym_END_CASE,
  [600] = 1,
    ACTIONS(159), 1,
      anon_sym_COLON_EQ,
  [604] = 1,
    ACTIONS(161), 1,
      anon_sym_END_CASE,
  [608] = 1,
    ACTIONS(163), 1,
      anon_sym_OF,
  [612] = 1,
    ACTIONS(165), 1,
      sym_number,
  [616] = 1,
    ACTIONS(167), 1,
      anon_sym_OF,
  [620] = 1,
    ACTIONS(169), 1,
      sym_number,
  [624] = 1,
    ACTIONS(171), 1,
      sym_identifier,
  [628] = 1,
    ACTIONS(173), 1,
      anon_sym_COLON_EQ,
  [632] = 1,
    ACTIONS(175), 1,
      sym_identifier,
  [636] = 1,
    ACTIONS(177), 1,
      anon_sym_COLON_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 22,
  [SMALL_STATE(4)] = 44,
  [SMALL_STATE(5)] = 64,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 133,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 202,
  [SMALL_STATE(12)] = 220,
  [SMALL_STATE(13)] = 238,
  [SMALL_STATE(14)] = 256,
  [SMALL_STATE(15)] = 274,
  [SMALL_STATE(16)] = 292,
  [SMALL_STATE(17)] = 310,
  [SMALL_STATE(18)] = 323,
  [SMALL_STATE(19)] = 336,
  [SMALL_STATE(20)] = 349,
  [SMALL_STATE(21)] = 359,
  [SMALL_STATE(22)] = 369,
  [SMALL_STATE(23)] = 379,
  [SMALL_STATE(24)] = 389,
  [SMALL_STATE(25)] = 399,
  [SMALL_STATE(26)] = 410,
  [SMALL_STATE(27)] = 421,
  [SMALL_STATE(28)] = 432,
  [SMALL_STATE(29)] = 441,
  [SMALL_STATE(30)] = 450,
  [SMALL_STATE(31)] = 459,
  [SMALL_STATE(32)] = 467,
  [SMALL_STATE(33)] = 475,
  [SMALL_STATE(34)] = 483,
  [SMALL_STATE(35)] = 491,
  [SMALL_STATE(36)] = 499,
  [SMALL_STATE(37)] = 505,
  [SMALL_STATE(38)] = 511,
  [SMALL_STATE(39)] = 517,
  [SMALL_STATE(40)] = 523,
  [SMALL_STATE(41)] = 529,
  [SMALL_STATE(42)] = 536,
  [SMALL_STATE(43)] = 540,
  [SMALL_STATE(44)] = 544,
  [SMALL_STATE(45)] = 548,
  [SMALL_STATE(46)] = 552,
  [SMALL_STATE(47)] = 556,
  [SMALL_STATE(48)] = 560,
  [SMALL_STATE(49)] = 564,
  [SMALL_STATE(50)] = 568,
  [SMALL_STATE(51)] = 572,
  [SMALL_STATE(52)] = 576,
  [SMALL_STATE(53)] = 580,
  [SMALL_STATE(54)] = 584,
  [SMALL_STATE(55)] = 588,
  [SMALL_STATE(56)] = 592,
  [SMALL_STATE(57)] = 596,
  [SMALL_STATE(58)] = 600,
  [SMALL_STATE(59)] = 604,
  [SMALL_STATE(60)] = 608,
  [SMALL_STATE(61)] = 612,
  [SMALL_STATE(62)] = 616,
  [SMALL_STATE(63)] = 620,
  [SMALL_STATE(64)] = 624,
  [SMALL_STATE(65)] = 628,
  [SMALL_STATE(66)] = 632,
  [SMALL_STATE(67)] = 636,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(66),
  [12] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2),
  [14] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_repeat1, 2), SHIFT_REPEAT(67),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_case_repeat1, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(43),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(58),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [63] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(64),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(65),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(48),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(41),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 3),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
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
