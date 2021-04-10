#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 12
#define STATE_COUNT 66
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  sym_identifier = 1,
  anon_sym_PROGRAM = 2,
  anon_sym_END_PROGRAM = 3,
  anon_sym_COLON_EQ = 4,
  anon_sym_SEMI = 5,
  anon_sym_IF = 6,
  anon_sym_THEN = 7,
  anon_sym_END_IF = 8,
  anon_sym_CASE = 9,
  anon_sym_OF = 10,
  anon_sym_END_CASE = 11,
  anon_sym_ELSIF = 12,
  anon_sym_ELSE = 13,
  anon_sym_COLON = 14,
  anon_sym_DOT_DOT = 15,
  sym_number = 16,
  sym_source_file = 17,
  sym__definition = 18,
  sym_program_definition = 19,
  sym_statement = 20,
  sym__control_statement = 21,
  sym_assignment = 22,
  sym_if_statement = 23,
  sym_case_statement = 24,
  sym_elseif_clause = 25,
  sym_else_clause = 26,
  sym_case = 27,
  sym_else_case = 28,
  sym_case_value = 29,
  sym_case_range = 30,
  sym__expression = 31,
  sym_literal = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_program_definition_repeat1 = 34,
  aux_sym_if_statement_repeat1 = 35,
  aux_sym_case_statement_repeat1 = 36,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_PROGRAM] = "PROGRAM",
  [anon_sym_END_PROGRAM] = "END_PROGRAM",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_SEMI] = ";",
  [anon_sym_IF] = "IF",
  [anon_sym_THEN] = "THEN",
  [anon_sym_END_IF] = "END_IF",
  [anon_sym_CASE] = "CASE",
  [anon_sym_OF] = "OF",
  [anon_sym_END_CASE] = "END_CASE",
  [anon_sym_ELSIF] = "ELSIF",
  [anon_sym_ELSE] = "ELSE",
  [anon_sym_COLON] = ":",
  [anon_sym_DOT_DOT] = "..",
  [sym_number] = "number",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_program_definition] = "program_definition",
  [sym_statement] = "statement",
  [sym__control_statement] = "_control_statement",
  [sym_assignment] = "assignment",
  [sym_if_statement] = "if_statement",
  [sym_case_statement] = "case_statement",
  [sym_elseif_clause] = "elseif_clause",
  [sym_else_clause] = "else_clause",
  [sym_case] = "case",
  [sym_else_case] = "else_case",
  [sym_case_value] = "case_value",
  [sym_case_range] = "case_range",
  [sym__expression] = "_expression",
  [sym_literal] = "literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_program_definition_repeat1] = "program_definition_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_case_statement_repeat1] = "case_statement_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_PROGRAM] = anon_sym_PROGRAM,
  [anon_sym_END_PROGRAM] = anon_sym_END_PROGRAM,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_IF] = anon_sym_IF,
  [anon_sym_THEN] = anon_sym_THEN,
  [anon_sym_END_IF] = anon_sym_END_IF,
  [anon_sym_CASE] = anon_sym_CASE,
  [anon_sym_OF] = anon_sym_OF,
  [anon_sym_END_CASE] = anon_sym_END_CASE,
  [anon_sym_ELSIF] = anon_sym_ELSIF,
  [anon_sym_ELSE] = anon_sym_ELSE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_number] = sym_number,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_program_definition] = sym_program_definition,
  [sym_statement] = sym_statement,
  [sym__control_statement] = sym__control_statement,
  [sym_assignment] = sym_assignment,
  [sym_if_statement] = sym_if_statement,
  [sym_case_statement] = sym_case_statement,
  [sym_elseif_clause] = sym_elseif_clause,
  [sym_else_clause] = sym_else_clause,
  [sym_case] = sym_case,
  [sym_else_case] = sym_else_case,
  [sym_case_value] = sym_case_value,
  [sym_case_range] = sym_case_range,
  [sym__expression] = sym__expression,
  [sym_literal] = sym_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_program_definition_repeat1] = aux_sym_program_definition_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
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
  [anon_sym_SEMI] = {
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
  [anon_sym_ELSIF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ELSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_case_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elseif_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
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
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
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
  [aux_sym_if_statement_repeat1] = {
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
  field_Condition = 2,
  field_ElsifCondition = 3,
  field_LowerLimit = 4,
  field_ProgramName = 5,
  field_UpperLimit = 6,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_CaseControlValue] = "CaseControlValue",
  [field_Condition] = "Condition",
  [field_ElsifCondition] = "ElsifCondition",
  [field_LowerLimit] = "LowerLimit",
  [field_ProgramName] = "ProgramName",
  [field_UpperLimit] = "UpperLimit",
};

static const TSFieldMapSlice ts_field_map_slices[6] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_ProgramName, 1},
  [1] =
    {field_Condition, 1},
  [2] =
    {field_CaseControlValue, 1},
  [3] =
    {field_ElsifCondition, 1},
  [4] =
    {field_LowerLimit, 0},
    {field_UpperLimit, 2},
};

static TSSymbol ts_alias_sequences[6][MAX_ALIAS_SEQUENCE_LENGTH] = {
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
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == ';') ADVANCE(7);
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
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '.') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
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
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'O') ADVANCE(4);
      if (lookahead == 'P') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(7);
      END_STATE();
    case 2:
      if (lookahead == 'L') ADVANCE(8);
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'F') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'F') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'R') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'H') ADVANCE(13);
      END_STATE();
    case 7:
      if (lookahead == 'S') ADVANCE(14);
      END_STATE();
    case 8:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == 'D') ADVANCE(16);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_IF);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_OF);
      END_STATE();
    case 12:
      if (lookahead == 'O') ADVANCE(17);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(18);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(19);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(20);
      if (lookahead == 'I') ADVANCE(21);
      END_STATE();
    case 16:
      if (lookahead == '_') ADVANCE(22);
      END_STATE();
    case 17:
      if (lookahead == 'G') ADVANCE(23);
      END_STATE();
    case 18:
      if (lookahead == 'N') ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_CASE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_ELSE);
      END_STATE();
    case 21:
      if (lookahead == 'F') ADVANCE(25);
      END_STATE();
    case 22:
      if (lookahead == 'C') ADVANCE(26);
      if (lookahead == 'I') ADVANCE(27);
      if (lookahead == 'P') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == 'R') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_THEN);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_ELSIF);
      END_STATE();
    case 26:
      if (lookahead == 'A') ADVANCE(30);
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
      if (lookahead == 'S') ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_END_IF);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 34:
      if (lookahead == 'E') ADVANCE(37);
      END_STATE();
    case 35:
      if (lookahead == 'G') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PROGRAM);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_END_CASE);
      END_STATE();
    case 38:
      if (lookahead == 'R') ADVANCE(39);
      END_STATE();
    case 39:
      if (lookahead == 'A') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'M') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_END_PROGRAM);
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
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
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
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_PROGRAM] = ACTIONS(1),
    [anon_sym_END_PROGRAM] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_IF] = ACTIONS(1),
    [anon_sym_THEN] = ACTIONS(1),
    [anon_sym_END_IF] = ACTIONS(1),
    [anon_sym_CASE] = ACTIONS(1),
    [anon_sym_OF] = ACTIONS(1),
    [anon_sym_END_CASE] = ACTIONS(1),
    [anon_sym_ELSIF] = ACTIONS(1),
    [anon_sym_ELSE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(61),
    [sym__definition] = STATE(37),
    [sym_program_definition] = STATE(45),
    [aux_sym_source_file_repeat1] = STATE(37),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_PROGRAM] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(12), 1,
      anon_sym_IF,
    ACTIONS(15), 1,
      anon_sym_CASE,
    ACTIONS(18), 1,
      sym_number,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(10), 5,
      anon_sym_END_PROGRAM,
      anon_sym_END_IF,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
  [32] = 11,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(24), 1,
      anon_sym_END_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(28), 1,
      anon_sym_ELSIF,
    ACTIONS(30), 1,
      anon_sym_ELSE,
    STATE(47), 1,
      sym_else_clause,
    STATE(4), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
    STATE(36), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [70] = 11,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(28), 1,
      anon_sym_ELSIF,
    ACTIONS(30), 1,
      anon_sym_ELSE,
    ACTIONS(32), 1,
      anon_sym_END_IF,
    STATE(52), 1,
      sym_else_clause,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
    STATE(35), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [108] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(34), 3,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
  [135] = 8,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(36), 1,
      sym_identifier,
    ACTIONS(41), 1,
      sym_number,
    ACTIONS(39), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [164] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    STATE(5), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
    ACTIONS(43), 3,
      anon_sym_END_IF,
      anon_sym_ELSIF,
      anon_sym_ELSE,
  [191] = 8,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(45), 1,
      sym_identifier,
    ACTIONS(50), 1,
      sym_number,
    ACTIONS(48), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(6), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [220] = 3,
    ACTIONS(54), 1,
      anon_sym_SEMI,
    ACTIONS(56), 1,
      sym_number,
    ACTIONS(52), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [237] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(58), 1,
      anon_sym_END_PROGRAM,
    STATE(17), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [262] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(60), 1,
      anon_sym_END_IF,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [287] = 3,
    ACTIONS(64), 1,
      anon_sym_SEMI,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(62), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [304] = 3,
    ACTIONS(70), 1,
      anon_sym_SEMI,
    ACTIONS(72), 1,
      sym_number,
    ACTIONS(68), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [321] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(74), 1,
      anon_sym_END_CASE,
    STATE(21), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [346] = 3,
    ACTIONS(78), 1,
      anon_sym_SEMI,
    ACTIONS(80), 1,
      sym_number,
    ACTIONS(76), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [363] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(82), 1,
      anon_sym_END_IF,
    STATE(11), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [388] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(84), 1,
      anon_sym_END_PROGRAM,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [413] = 3,
    ACTIONS(88), 1,
      anon_sym_SEMI,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(86), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [430] = 3,
    ACTIONS(94), 1,
      anon_sym_SEMI,
    ACTIONS(96), 1,
      sym_number,
    ACTIONS(92), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [447] = 3,
    ACTIONS(100), 1,
      anon_sym_SEMI,
    ACTIONS(102), 1,
      sym_number,
    ACTIONS(98), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [464] = 7,
    ACTIONS(20), 1,
      sym_identifier,
    ACTIONS(22), 1,
      anon_sym_IF,
    ACTIONS(26), 1,
      anon_sym_CASE,
    ACTIONS(104), 1,
      anon_sym_END_CASE,
    STATE(2), 2,
      sym_statement,
      aux_sym_program_definition_repeat1,
    STATE(22), 2,
      sym_if_statement,
      sym_case_statement,
    STATE(29), 2,
      sym__control_statement,
      sym_assignment,
  [489] = 2,
    ACTIONS(108), 1,
      sym_number,
    ACTIONS(106), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [503] = 2,
    ACTIONS(112), 1,
      sym_number,
    ACTIONS(110), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [517] = 8,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_END_CASE,
    ACTIONS(118), 1,
      anon_sym_ELSE,
    ACTIONS(120), 1,
      sym_number,
    STATE(46), 1,
      sym_case_value,
    STATE(53), 1,
      sym_else_case,
    STATE(59), 1,
      sym_case_range,
    STATE(28), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [543] = 2,
    ACTIONS(102), 1,
      sym_number,
    ACTIONS(98), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [557] = 2,
    ACTIONS(56), 1,
      sym_number,
    ACTIONS(52), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [571] = 2,
    ACTIONS(90), 1,
      sym_number,
    ACTIONS(86), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [585] = 8,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_ELSE,
    ACTIONS(120), 1,
      sym_number,
    ACTIONS(122), 1,
      anon_sym_END_CASE,
    STATE(46), 1,
      sym_case_value,
    STATE(51), 1,
      sym_else_case,
    STATE(59), 1,
      sym_case_range,
    STATE(34), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [611] = 2,
    ACTIONS(126), 1,
      sym_number,
    ACTIONS(124), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [625] = 2,
    ACTIONS(72), 1,
      sym_number,
    ACTIONS(68), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [639] = 2,
    ACTIONS(130), 1,
      sym_number,
    ACTIONS(128), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [653] = 2,
    ACTIONS(66), 1,
      sym_number,
    ACTIONS(62), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [667] = 2,
    ACTIONS(134), 1,
      sym_number,
    ACTIONS(132), 8,
      anon_sym_END_PROGRAM,
      anon_sym_IF,
      anon_sym_END_IF,
      anon_sym_CASE,
      anon_sym_END_CASE,
      anon_sym_ELSIF,
      anon_sym_ELSE,
      sym_identifier,
  [681] = 6,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(141), 1,
      sym_number,
    STATE(46), 1,
      sym_case_value,
    STATE(59), 1,
      sym_case_range,
    ACTIONS(139), 2,
      anon_sym_END_CASE,
      anon_sym_ELSE,
    STATE(34), 2,
      sym_case,
      aux_sym_case_statement_repeat1,
  [702] = 5,
    ACTIONS(144), 1,
      anon_sym_END_IF,
    ACTIONS(146), 1,
      anon_sym_ELSIF,
    ACTIONS(148), 1,
      anon_sym_ELSE,
    STATE(56), 1,
      sym_else_clause,
    STATE(39), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [719] = 5,
    ACTIONS(146), 1,
      anon_sym_ELSIF,
    ACTIONS(148), 1,
      anon_sym_ELSE,
    ACTIONS(150), 1,
      anon_sym_END_IF,
    STATE(52), 1,
      sym_else_clause,
    STATE(39), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [736] = 4,
    ACTIONS(5), 1,
      anon_sym_PROGRAM,
    ACTIONS(152), 1,
      ts_builtin_sym_end,
    STATE(45), 1,
      sym_program_definition,
    STATE(38), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [750] = 4,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
    ACTIONS(156), 1,
      anon_sym_PROGRAM,
    STATE(45), 1,
      sym_program_definition,
    STATE(38), 2,
      sym__definition,
      aux_sym_source_file_repeat1,
  [764] = 3,
    ACTIONS(161), 1,
      anon_sym_ELSIF,
    ACTIONS(159), 2,
      anon_sym_END_IF,
      anon_sym_ELSE,
    STATE(39), 2,
      sym_elseif_clause,
      aux_sym_if_statement_repeat1,
  [776] = 4,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_number,
    STATE(62), 1,
      sym_literal,
    STATE(65), 1,
      sym__expression,
  [789] = 4,
    ACTIONS(164), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_number,
    STATE(58), 1,
      sym__expression,
    STATE(62), 1,
      sym_literal,
  [802] = 1,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [807] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [812] = 2,
    ACTIONS(172), 1,
      anon_sym_COLON,
    ACTIONS(174), 1,
      anon_sym_DOT_DOT,
  [819] = 1,
    ACTIONS(176), 2,
      ts_builtin_sym_end,
      anon_sym_PROGRAM,
  [824] = 1,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [828] = 1,
    ACTIONS(150), 1,
      anon_sym_END_IF,
  [832] = 1,
    ACTIONS(180), 1,
      sym_number,
  [836] = 1,
    ACTIONS(182), 1,
      sym_identifier,
  [840] = 1,
    ACTIONS(184), 1,
      anon_sym_SEMI,
  [844] = 1,
    ACTIONS(186), 1,
      anon_sym_END_CASE,
  [848] = 1,
    ACTIONS(144), 1,
      anon_sym_END_IF,
  [852] = 1,
    ACTIONS(188), 1,
      anon_sym_END_CASE,
  [856] = 1,
    ACTIONS(190), 1,
      sym_number,
  [860] = 1,
    ACTIONS(192), 1,
      anon_sym_OF,
  [864] = 1,
    ACTIONS(194), 1,
      anon_sym_END_IF,
  [868] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [872] = 1,
    ACTIONS(198), 1,
      anon_sym_THEN,
  [876] = 1,
    ACTIONS(172), 1,
      anon_sym_COLON,
  [880] = 1,
    ACTIONS(200), 1,
      anon_sym_THEN,
  [884] = 1,
    ACTIONS(202), 1,
      ts_builtin_sym_end,
  [888] = 1,
    ACTIONS(204), 1,
      anon_sym_THEN,
  [892] = 1,
    ACTIONS(206), 1,
      anon_sym_COLON_EQ,
  [896] = 1,
    ACTIONS(208), 1,
      sym_identifier,
  [900] = 1,
    ACTIONS(210), 1,
      anon_sym_THEN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 70,
  [SMALL_STATE(5)] = 108,
  [SMALL_STATE(6)] = 135,
  [SMALL_STATE(7)] = 164,
  [SMALL_STATE(8)] = 191,
  [SMALL_STATE(9)] = 220,
  [SMALL_STATE(10)] = 237,
  [SMALL_STATE(11)] = 262,
  [SMALL_STATE(12)] = 287,
  [SMALL_STATE(13)] = 304,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 346,
  [SMALL_STATE(16)] = 363,
  [SMALL_STATE(17)] = 388,
  [SMALL_STATE(18)] = 413,
  [SMALL_STATE(19)] = 430,
  [SMALL_STATE(20)] = 447,
  [SMALL_STATE(21)] = 464,
  [SMALL_STATE(22)] = 489,
  [SMALL_STATE(23)] = 503,
  [SMALL_STATE(24)] = 517,
  [SMALL_STATE(25)] = 543,
  [SMALL_STATE(26)] = 557,
  [SMALL_STATE(27)] = 571,
  [SMALL_STATE(28)] = 585,
  [SMALL_STATE(29)] = 611,
  [SMALL_STATE(30)] = 625,
  [SMALL_STATE(31)] = 639,
  [SMALL_STATE(32)] = 653,
  [SMALL_STATE(33)] = 667,
  [SMALL_STATE(34)] = 681,
  [SMALL_STATE(35)] = 702,
  [SMALL_STATE(36)] = 719,
  [SMALL_STATE(37)] = 736,
  [SMALL_STATE(38)] = 750,
  [SMALL_STATE(39)] = 764,
  [SMALL_STATE(40)] = 776,
  [SMALL_STATE(41)] = 789,
  [SMALL_STATE(42)] = 802,
  [SMALL_STATE(43)] = 807,
  [SMALL_STATE(44)] = 812,
  [SMALL_STATE(45)] = 819,
  [SMALL_STATE(46)] = 824,
  [SMALL_STATE(47)] = 828,
  [SMALL_STATE(48)] = 832,
  [SMALL_STATE(49)] = 836,
  [SMALL_STATE(50)] = 840,
  [SMALL_STATE(51)] = 844,
  [SMALL_STATE(52)] = 848,
  [SMALL_STATE(53)] = 852,
  [SMALL_STATE(54)] = 856,
  [SMALL_STATE(55)] = 860,
  [SMALL_STATE(56)] = 864,
  [SMALL_STATE(57)] = 868,
  [SMALL_STATE(58)] = 872,
  [SMALL_STATE(59)] = 876,
  [SMALL_STATE(60)] = 880,
  [SMALL_STATE(61)] = 884,
  [SMALL_STATE(62)] = 888,
  [SMALL_STATE(63)] = 892,
  [SMALL_STATE(64)] = 896,
  [SMALL_STATE(65)] = 900,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(63),
  [10] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(41),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_definition_repeat1, 2), SHIFT_REPEAT(64),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_definition_repeat1, 2),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [32] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_clause, 4, .production_id = 4),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 3), SHIFT(63),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 3),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 3),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elseif_clause, 3, .production_id = 4),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_case, 2), SHIFT(63),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 5, .production_id = 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 5, .production_id = 3),
  [58] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 7, .production_id = 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 7, .production_id = 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 4, .production_id = 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 4, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 1),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 6, .production_id = 3),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 6, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 6, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 6, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_case, 2),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__control_statement, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__control_statement, 1),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 8, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 8, .production_id = 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_statement, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 1),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_case_statement, 7, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_statement, 7, .production_id = 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(59),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_case_statement_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_case_statement_repeat1, 2), SHIFT_REPEAT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(49),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [161] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(40),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 4, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program_definition, 3, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_value, 1),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__definition, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_case_range, 3, .production_id = 5),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [202] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [204] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
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
