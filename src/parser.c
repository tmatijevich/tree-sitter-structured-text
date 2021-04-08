#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 64
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 7

enum {
  sym_identifier = 1,
  anon_sym_CASE = 2,
  anon_sym_OF = 3,
  anon_sym_END_CASE = 4,
  anon_sym_SEMI = 5,
  anon_sym_COLON = 6,
  anon_sym_ELSE = 7,
  sym_case_value = 8,
  anon_sym_COLON_EQ = 9,
  sym_number = 10,
  sym_source_file = 11,
  sym_statement = 12,
  sym_case_statement = 13,
  sym_case = 14,
  sym_else_case = 15,
  sym_assignment = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_case_statement_repeat1 = 18,
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
  [anon_sym_COLON] = anon_sym_COLON,
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
  [anon_sym_COLON] = {
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
      if (eof) ADVANCE(18);
      if (lookahead == ':') ADVANCE(24);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 1:
      if (lookahead == '.') ADVANCE(15);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'E') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'L') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 12:
      if (lookahead == 'N') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'S') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(6);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 16:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 17:
      if (eof) ADVANCE(18);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(17)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_ELSE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == '.') ADVANCE(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'A') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'C') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'D') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'E') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'E') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'S') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == 'S') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_case_value);
      if (lookahead == '_') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_case_value);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_case_value);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(47);
      if (lookahead == 'N') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(33);
      if (lookahead == 'N') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(52);
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
      if (lookahead == 'O') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(3);
      END_STATE();
    case 2:
      if (lookahead == 'F') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == 'S') ADVANCE(5);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 5:
      if (lookahead == 'E') ADVANCE(6);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 17},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 17},
  [7] = {.lex_state = 17},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 8},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 17},
  [27] = {.lex_state = 17},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 17},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 17},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 17},
  [38] = {.lex_state = 17},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 17},
  [41] = {.lex_state = 9},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 17},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 17},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 17},
  [49] = {.lex_state = 9},
  [50] = {.lex_state = 9},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 9},
  [56] = {.lex_state = 17},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 17},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 17},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 17},
  [63] = {.lex_state = 2},
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
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym_statement] = STATE(6),
    [sym_case_statement] = STATE(35),
    [sym_assignment] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_CASE] = ACTIONS(7),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_CASE,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(23), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(13), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [20] = 5,
    ACTIONS(15), 1,
      sym_identifier,
    ACTIONS(18), 1,
      anon_sym_CASE,
    STATE(3), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(23), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(21), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [40] = 5,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      anon_sym_CASE,
    STATE(2), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(23), 2,
      sym_case_statement,
      sym_assignment,
    ACTIONS(23), 3,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
  [60] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_CASE,
    ACTIONS(29), 1,
      anon_sym_END_CASE,
    STATE(8), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_case_statement,
      sym_assignment,
  [78] = 5,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_CASE,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(7), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(35), 2,
      sym_case_statement,
      sym_assignment,
  [96] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_identifier,
    ACTIONS(38), 1,
      anon_sym_CASE,
    STATE(7), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(35), 2,
      sym_case_statement,
      sym_assignment,
  [114] = 5,
    ACTIONS(21), 1,
      anon_sym_END_CASE,
    ACTIONS(41), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_CASE,
    STATE(8), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_case_statement,
      sym_assignment,
  [132] = 5,
    ACTIONS(25), 1,
      sym_identifier,
    ACTIONS(27), 1,
      anon_sym_CASE,
    ACTIONS(47), 1,
      anon_sym_END_CASE,
    STATE(5), 2,
      sym_statement,
      aux_sym_source_file_repeat1,
    STATE(33), 2,
      sym_case_statement,
      sym_assignment,
  [150] = 5,
    ACTIONS(49), 1,
      anon_sym_END_CASE,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(53), 1,
      sym_case_value,
    STATE(55), 1,
      sym_else_case,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [167] = 5,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(53), 1,
      sym_case_value,
    ACTIONS(55), 1,
      anon_sym_END_CASE,
    STATE(53), 1,
      sym_else_case,
    STATE(10), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [184] = 5,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(53), 1,
      sym_case_value,
    ACTIONS(57), 1,
      anon_sym_END_CASE,
    STATE(50), 1,
      sym_else_case,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [201] = 5,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(53), 1,
      sym_case_value,
    ACTIONS(59), 1,
      anon_sym_END_CASE,
    STATE(41), 1,
      sym_else_case,
    STATE(12), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [218] = 2,
    ACTIONS(63), 1,
      anon_sym_SEMI,
    ACTIONS(61), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [229] = 5,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(53), 1,
      sym_case_value,
    ACTIONS(65), 1,
      anon_sym_END_CASE,
    STATE(52), 1,
      sym_else_case,
    STATE(17), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [246] = 2,
    ACTIONS(69), 1,
      anon_sym_SEMI,
    ACTIONS(67), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [257] = 5,
    ACTIONS(51), 1,
      anon_sym_ELSE,
    ACTIONS(53), 1,
      sym_case_value,
    ACTIONS(71), 1,
      anon_sym_END_CASE,
    STATE(49), 1,
      sym_else_case,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [274] = 2,
    ACTIONS(75), 1,
      anon_sym_SEMI,
    ACTIONS(73), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [285] = 1,
    ACTIONS(77), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [293] = 1,
    ACTIONS(79), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [301] = 3,
    ACTIONS(83), 1,
      sym_case_value,
    ACTIONS(81), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(21), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [313] = 1,
    ACTIONS(67), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [321] = 1,
    ACTIONS(86), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [329] = 1,
    ACTIONS(61), 5,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSE,
      sym_case_value,
      sym_identifier,
  [337] = 2,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    ACTIONS(67), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [346] = 3,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(67), 2,
      anon_sym_CASE,
      sym_identifier,
  [357] = 3,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(96), 1,
      anon_sym_SEMI,
    ACTIONS(61), 2,
      anon_sym_CASE,
      sym_identifier,
  [368] = 2,
    ACTIONS(98), 1,
      anon_sym_SEMI,
    ACTIONS(61), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [377] = 3,
    ACTIONS(100), 1,
      ts_builtin_sym_end,
    ACTIONS(102), 1,
      anon_sym_SEMI,
    ACTIONS(73), 2,
      anon_sym_CASE,
      sym_identifier,
  [388] = 2,
    ACTIONS(104), 1,
      anon_sym_SEMI,
    ACTIONS(73), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [397] = 1,
    ACTIONS(79), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [403] = 2,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 2,
      anon_sym_CASE,
      sym_identifier,
  [411] = 1,
    ACTIONS(86), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [417] = 1,
    ACTIONS(61), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [423] = 2,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(86), 2,
      anon_sym_CASE,
      sym_identifier,
  [431] = 1,
    ACTIONS(77), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [437] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 2,
      anon_sym_CASE,
      sym_identifier,
  [445] = 2,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      anon_sym_CASE,
      sym_identifier,
  [453] = 1,
    ACTIONS(67), 3,
      anon_sym_CASE,
      anon_sym_END_CASE,
      sym_identifier,
  [459] = 2,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 2,
      anon_sym_CASE,
      sym_identifier,
  [467] = 1,
    ACTIONS(112), 1,
      anon_sym_END_CASE,
  [471] = 1,
    ACTIONS(114), 1,
      anon_sym_SEMI,
  [475] = 1,
    ACTIONS(116), 1,
      anon_sym_COLON,
  [479] = 1,
    ACTIONS(118), 1,
      anon_sym_SEMI,
  [483] = 1,
    ACTIONS(120), 1,
      sym_number,
  [487] = 1,
    ACTIONS(122), 1,
      anon_sym_OF,
  [491] = 1,
    ACTIONS(124), 1,
      anon_sym_SEMI,
  [495] = 1,
    ACTIONS(126), 1,
      sym_identifier,
  [499] = 1,
    ACTIONS(128), 1,
      anon_sym_END_CASE,
  [503] = 1,
    ACTIONS(130), 1,
      anon_sym_END_CASE,
  [507] = 1,
    ACTIONS(132), 1,
      ts_builtin_sym_end,
  [511] = 1,
    ACTIONS(134), 1,
      anon_sym_END_CASE,
  [515] = 1,
    ACTIONS(136), 1,
      anon_sym_END_CASE,
  [519] = 1,
    ACTIONS(138), 1,
      anon_sym_COLON_EQ,
  [523] = 1,
    ACTIONS(140), 1,
      anon_sym_END_CASE,
  [527] = 1,
    ACTIONS(142), 1,
      anon_sym_OF,
  [531] = 1,
    ACTIONS(144), 1,
      sym_number,
  [535] = 1,
    ACTIONS(146), 1,
      anon_sym_OF,
  [539] = 1,
    ACTIONS(148), 1,
      sym_number,
  [543] = 1,
    ACTIONS(150), 1,
      sym_identifier,
  [547] = 1,
    ACTIONS(152), 1,
      anon_sym_COLON_EQ,
  [551] = 1,
    ACTIONS(154), 1,
      sym_identifier,
  [555] = 1,
    ACTIONS(156), 1,
      anon_sym_COLON_EQ,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 96,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 150,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 184,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 218,
  [SMALL_STATE(15)] = 229,
  [SMALL_STATE(16)] = 246,
  [SMALL_STATE(17)] = 257,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 285,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 329,
  [SMALL_STATE(25)] = 337,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 357,
  [SMALL_STATE(28)] = 368,
  [SMALL_STATE(29)] = 377,
  [SMALL_STATE(30)] = 388,
  [SMALL_STATE(31)] = 397,
  [SMALL_STATE(32)] = 403,
  [SMALL_STATE(33)] = 411,
  [SMALL_STATE(34)] = 417,
  [SMALL_STATE(35)] = 423,
  [SMALL_STATE(36)] = 431,
  [SMALL_STATE(37)] = 437,
  [SMALL_STATE(38)] = 445,
  [SMALL_STATE(39)] = 453,
  [SMALL_STATE(40)] = 459,
  [SMALL_STATE(41)] = 467,
  [SMALL_STATE(42)] = 471,
  [SMALL_STATE(43)] = 475,
  [SMALL_STATE(44)] = 479,
  [SMALL_STATE(45)] = 483,
  [SMALL_STATE(46)] = 487,
  [SMALL_STATE(47)] = 491,
  [SMALL_STATE(48)] = 495,
  [SMALL_STATE(49)] = 499,
  [SMALL_STATE(50)] = 503,
  [SMALL_STATE(51)] = 507,
  [SMALL_STATE(52)] = 511,
  [SMALL_STATE(53)] = 515,
  [SMALL_STATE(54)] = 519,
  [SMALL_STATE(55)] = 523,
  [SMALL_STATE(56)] = 527,
  [SMALL_STATE(57)] = 531,
  [SMALL_STATE(58)] = 535,
  [SMALL_STATE(59)] = 539,
  [SMALL_STATE(60)] = 543,
  [SMALL_STATE(61)] = 547,
  [SMALL_STATE(62)] = 551,
  [SMALL_STATE(63)] = 555,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(63),
  [18] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(62),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(61),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(60),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(43),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
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
