#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 6

enum {
  sym_identifier = 1,
  anon_sym_DOT = 2,
  anon_sym_EQ = 3,
  anon_sym_includeConfig = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_SQUOTE = 7,
  anon_sym_DQUOTE = 8,
  sym_string_literal_fragment_single = 9,
  sym_string_literal_fragment_double = 10,
  sym_null_literal = 11,
  anon_sym_true = 12,
  anon_sym_false = 13,
  sym_integer_literal = 14,
  sym_real_literal = 15,
  sym_line_comment = 16,
  sym_block_comment = 17,
  sym_config_file = 18,
  sym_assignment = 19,
  sym_include = 20,
  sym_scope_block = 21,
  sym_literal = 22,
  sym_string_literal = 23,
  sym_string_literal_single = 24,
  sym_string_literal_double = 25,
  sym_boolean_literal = 26,
  sym_numeric_literal = 27,
  aux_sym_config_file_repeat1 = 28,
  aux_sym_assignment_repeat1 = 29,
  aux_sym_scope_block_repeat1 = 30,
  aux_sym_string_literal_single_repeat1 = 31,
  aux_sym_string_literal_double_repeat1 = 32,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_DOT] = ".",
  [anon_sym_EQ] = "=",
  [anon_sym_includeConfig] = "includeConfig",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_literal_fragment_single] = "string_literal_fragment_single",
  [sym_string_literal_fragment_double] = "string_literal_fragment_double",
  [sym_null_literal] = "null_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_integer_literal] = "integer_literal",
  [sym_real_literal] = "real_literal",
  [sym_line_comment] = "line_comment",
  [sym_block_comment] = "block_comment",
  [sym_config_file] = "config_file",
  [sym_assignment] = "assignment",
  [sym_include] = "include",
  [sym_scope_block] = "scope_block",
  [sym_literal] = "literal",
  [sym_string_literal] = "string_literal",
  [sym_string_literal_single] = "string_literal_single",
  [sym_string_literal_double] = "string_literal_double",
  [sym_boolean_literal] = "boolean_literal",
  [sym_numeric_literal] = "numeric_literal",
  [aux_sym_config_file_repeat1] = "config_file_repeat1",
  [aux_sym_assignment_repeat1] = "assignment_repeat1",
  [aux_sym_scope_block_repeat1] = "scope_block_repeat1",
  [aux_sym_string_literal_single_repeat1] = "string_literal_single_repeat1",
  [aux_sym_string_literal_double_repeat1] = "string_literal_double_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_includeConfig] = anon_sym_includeConfig,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_literal_fragment_single] = sym_string_literal_fragment_single,
  [sym_string_literal_fragment_double] = sym_string_literal_fragment_double,
  [sym_null_literal] = sym_null_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_integer_literal] = sym_integer_literal,
  [sym_real_literal] = sym_real_literal,
  [sym_line_comment] = sym_line_comment,
  [sym_block_comment] = sym_block_comment,
  [sym_config_file] = sym_config_file,
  [sym_assignment] = sym_assignment,
  [sym_include] = sym_include,
  [sym_scope_block] = sym_scope_block,
  [sym_literal] = sym_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_string_literal_single] = sym_string_literal_single,
  [sym_string_literal_double] = sym_string_literal_double,
  [sym_boolean_literal] = sym_boolean_literal,
  [sym_numeric_literal] = sym_numeric_literal,
  [aux_sym_config_file_repeat1] = aux_sym_config_file_repeat1,
  [aux_sym_assignment_repeat1] = aux_sym_assignment_repeat1,
  [aux_sym_scope_block_repeat1] = aux_sym_scope_block_repeat1,
  [aux_sym_string_literal_single_repeat1] = aux_sym_string_literal_single_repeat1,
  [aux_sym_string_literal_double_repeat1] = aux_sym_string_literal_double_repeat1,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_includeConfig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal_fragment_single] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_fragment_double] = {
    .visible = true,
    .named = true,
  },
  [sym_null_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_real_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_config_file] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_scope_block] = {
    .visible = true,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_single] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal_double] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_config_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assignment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_scope_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_single_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_double_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_scope = 2,
  field_value = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_scope] = "scope",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 3},
  [5] = {.index = 8, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_scope, 0},
  [1] =
    {field_scope, 0, .inherited = true},
    {field_scope, 1, .inherited = true},
  [3] =
    {field_name, 0},
    {field_value, 2},
  [5] =
    {field_name, 1},
    {field_scope, 0, .inherited = true},
    {field_value, 3},
  [8] =
    {field_scope, 0, .inherited = true},
    {field_scope, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(9);
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '{') ADVANCE(12);
      if (lookahead == '}') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(15);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(14);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(29);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead == '/') ADVANCE(30);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(6);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_string_literal_fragment_single);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_string_literal_fragment_single);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_string_literal_fragment_single);
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string_literal_fragment_single);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string_literal_fragment_single);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_string_literal_fragment_double);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_string_literal_fragment_double);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_string_literal_fragment_double);
      if (lookahead == '*') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_string_literal_fragment_double);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_string_literal_fragment_double);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '.') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_real_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_block_comment);
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
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'n') ADVANCE(3);
      if (lookahead == 't') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'a') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 3:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 4:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 5:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(10);
      END_STATE();
    case 7:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 10:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(18);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_null_literal);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == 'C') ADVANCE(21);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 25:
      if (lookahead == 'g') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_includeConfig);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_includeConfig] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_null_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [sym_real_literal] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_config_file] = STATE(38),
    [sym_assignment] = STATE(4),
    [sym_include] = STATE(4),
    [sym_scope_block] = STATE(4),
    [aux_sym_config_file_repeat1] = STATE(4),
    [aux_sym_assignment_repeat1] = STATE(35),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_identifier] = ACTIONS(7),
    [anon_sym_includeConfig] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_null_literal,
    ACTIONS(19), 1,
      sym_integer_literal,
    ACTIONS(21), 1,
      sym_real_literal,
    STATE(24), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_string_literal_single,
      sym_string_literal_double,
    STATE(21), 3,
      sym_string_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [36] = 10,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    ACTIONS(15), 1,
      sym_null_literal,
    ACTIONS(19), 1,
      sym_integer_literal,
    ACTIONS(21), 1,
      sym_real_literal,
    STATE(16), 1,
      sym_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(17), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(25), 2,
      sym_string_literal_single,
      sym_string_literal_double,
    STATE(21), 3,
      sym_string_literal,
      sym_boolean_literal,
      sym_numeric_literal,
  [72] = 6,
    ACTIONS(7), 1,
      sym_identifier,
    ACTIONS(9), 1,
      anon_sym_includeConfig,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 4,
      sym_assignment,
      sym_include,
      sym_scope_block,
      aux_sym_config_file_repeat1,
  [95] = 6,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(30), 1,
      anon_sym_includeConfig,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(5), 4,
      sym_assignment,
      sym_include,
      sym_scope_block,
      aux_sym_config_file_repeat1,
  [118] = 5,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym_assignment,
      sym_scope_block,
      aux_sym_scope_block_repeat1,
  [137] = 5,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(40), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym_assignment,
      sym_scope_block,
      aux_sym_scope_block_repeat1,
  [156] = 5,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(6), 3,
      sym_assignment,
      sym_scope_block,
      aux_sym_scope_block_repeat1,
  [175] = 5,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(7), 3,
      sym_assignment,
      sym_scope_block,
      aux_sym_scope_block_repeat1,
  [194] = 5,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(46), 1,
      anon_sym_RBRACE,
    STATE(35), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(9), 3,
      sym_assignment,
      sym_scope_block,
      aux_sym_scope_block_repeat1,
  [213] = 5,
    ACTIONS(11), 1,
      anon_sym_SQUOTE,
    ACTIONS(13), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      sym_string_literal,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    STATE(25), 2,
      sym_string_literal_single,
      sym_string_literal_double,
  [231] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(50), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [244] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(54), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [257] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(58), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [270] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(62), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [283] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(64), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(66), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [296] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(68), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(70), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [309] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [322] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(76), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(78), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [335] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(82), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [348] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(86), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [361] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(90), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [374] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(94), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [387] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(98), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [400] = 3,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    ACTIONS(102), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [413] = 4,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [427] = 3,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
    ACTIONS(112), 2,
      anon_sym_includeConfig,
      sym_identifier,
  [439] = 4,
    ACTIONS(114), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_string_literal_fragment_double,
    STATE(31), 1,
      aux_sym_string_literal_double_repeat1,
    ACTIONS(118), 2,
      sym_line_comment,
      sym_block_comment,
  [453] = 4,
    ACTIONS(120), 1,
      anon_sym_SQUOTE,
    ACTIONS(122), 1,
      sym_string_literal_fragment_single,
    STATE(33), 1,
      aux_sym_string_literal_single_repeat1,
    ACTIONS(118), 2,
      sym_line_comment,
      sym_block_comment,
  [467] = 4,
    ACTIONS(124), 1,
      anon_sym_SQUOTE,
    ACTIONS(126), 1,
      sym_string_literal_fragment_single,
    STATE(30), 1,
      aux_sym_string_literal_single_repeat1,
    ACTIONS(118), 2,
      sym_line_comment,
      sym_block_comment,
  [481] = 4,
    ACTIONS(129), 1,
      anon_sym_DQUOTE,
    ACTIONS(131), 1,
      sym_string_literal_fragment_double,
    STATE(32), 1,
      aux_sym_string_literal_double_repeat1,
    ACTIONS(118), 2,
      sym_line_comment,
      sym_block_comment,
  [495] = 4,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_string_literal_fragment_double,
    STATE(32), 1,
      aux_sym_string_literal_double_repeat1,
    ACTIONS(118), 2,
      sym_line_comment,
      sym_block_comment,
  [509] = 4,
    ACTIONS(138), 1,
      anon_sym_SQUOTE,
    ACTIONS(140), 1,
      sym_string_literal_fragment_single,
    STATE(30), 1,
      aux_sym_string_literal_single_repeat1,
    ACTIONS(118), 2,
      sym_line_comment,
      sym_block_comment,
  [523] = 4,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(142), 1,
      anon_sym_EQ,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [537] = 3,
    ACTIONS(146), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [548] = 3,
    ACTIONS(148), 1,
      sym_identifier,
    STATE(36), 1,
      aux_sym_assignment_repeat1,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [559] = 2,
    ACTIONS(104), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [567] = 2,
    ACTIONS(151), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
  [575] = 2,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(3), 2,
      sym_line_comment,
      sym_block_comment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 95,
  [SMALL_STATE(6)] = 118,
  [SMALL_STATE(7)] = 137,
  [SMALL_STATE(8)] = 156,
  [SMALL_STATE(9)] = 175,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 213,
  [SMALL_STATE(12)] = 231,
  [SMALL_STATE(13)] = 244,
  [SMALL_STATE(14)] = 257,
  [SMALL_STATE(15)] = 270,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 296,
  [SMALL_STATE(18)] = 309,
  [SMALL_STATE(19)] = 322,
  [SMALL_STATE(20)] = 335,
  [SMALL_STATE(21)] = 348,
  [SMALL_STATE(22)] = 361,
  [SMALL_STATE(23)] = 374,
  [SMALL_STATE(24)] = 387,
  [SMALL_STATE(25)] = 400,
  [SMALL_STATE(26)] = 413,
  [SMALL_STATE(27)] = 427,
  [SMALL_STATE(28)] = 439,
  [SMALL_STATE(29)] = 453,
  [SMALL_STATE(30)] = 467,
  [SMALL_STATE(31)] = 481,
  [SMALL_STATE(32)] = 495,
  [SMALL_STATE(33)] = 509,
  [SMALL_STATE(34)] = 523,
  [SMALL_STATE(35)] = 537,
  [SMALL_STATE(36)] = 548,
  [SMALL_STATE(37)] = 559,
  [SMALL_STATE(38)] = 567,
  [SMALL_STATE(39)] = 575,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_config_file, 1),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_config_file_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(26),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_config_file_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_scope_block_repeat1, 2), SHIFT_REPEAT(26),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_scope_block_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_single, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_single, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_block, 3, .production_id = 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_block, 3, .production_id = 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_block, 5, .production_id = 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_block, 5, .production_id = 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_block, 4, .production_id = 5),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_block, 4, .production_id = 5),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 4, .production_id = 4),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_single, 2),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_single, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_scope_block, 4, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_scope_block, 4, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_double, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_double, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal_double, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal_double, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numeric_literal, 1),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_numeric_literal, 1),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3, .production_id = 3),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 1),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_single_repeat1, 2),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_single_repeat1, 2), SHIFT_REPEAT(30),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_literal_double_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_double_repeat1, 2), SHIFT_REPEAT(32),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 2), SHIFT_REPEAT(37),
  [151] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_assignment_repeat1, 2, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_nextflow_config(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
