#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 19
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym__comment_char = 1,
  sym__comment_contents = 2,
  anon_sym_input = 3,
  anon_sym_filter = 4,
  anon_sym_output = 5,
  aux_sym_plugin_name_token1 = 6,
  anon_sym_DQUOTE = 7,
  sym__plugin_open = 8,
  sym__plugin_close = 9,
  sym_source_file = 10,
  sym_comment = 11,
  sym_plugin_section = 12,
  sym_plugin_type = 13,
  sym_plugin_name = 14,
  sym_plugin_content = 15,
  sym_plugin = 16,
  aux_sym_source_file_repeat1 = 17,
  aux_sym_plugin_section_repeat1 = 18,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__comment_char] = "_comment_char",
  [sym__comment_contents] = "_comment_contents",
  [anon_sym_input] = "input",
  [anon_sym_filter] = "filter",
  [anon_sym_output] = "output",
  [aux_sym_plugin_name_token1] = "plugin_name_token1",
  [anon_sym_DQUOTE] = "\"",
  [sym__plugin_open] = "_plugin_open",
  [sym__plugin_close] = "_plugin_close",
  [sym_source_file] = "source_file",
  [sym_comment] = "comment",
  [sym_plugin_section] = "plugin_section",
  [sym_plugin_type] = "plugin_type",
  [sym_plugin_name] = "plugin_name",
  [sym_plugin_content] = "plugin_content",
  [sym_plugin] = "plugin",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_plugin_section_repeat1] = "plugin_section_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__comment_char] = sym__comment_char,
  [sym__comment_contents] = sym__comment_contents,
  [anon_sym_input] = anon_sym_input,
  [anon_sym_filter] = anon_sym_filter,
  [anon_sym_output] = anon_sym_output,
  [aux_sym_plugin_name_token1] = aux_sym_plugin_name_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__plugin_open] = sym__plugin_open,
  [sym__plugin_close] = sym__plugin_close,
  [sym_source_file] = sym_source_file,
  [sym_comment] = sym_comment,
  [sym_plugin_section] = sym_plugin_section,
  [sym_plugin_type] = sym_plugin_type,
  [sym_plugin_name] = sym_plugin_name,
  [sym_plugin_content] = sym_plugin_content,
  [sym_plugin] = sym_plugin,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_plugin_section_repeat1] = aux_sym_plugin_section_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_char] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_contents] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_input] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_output] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_plugin_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__plugin_open] = {
    .visible = false,
    .named = true,
  },
  [sym__plugin_close] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_section] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_type] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_name] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin_content] = {
    .visible = true,
    .named = true,
  },
  [sym_plugin] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_plugin_section_repeat1] = {
    .visible = false,
    .named = false,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '?') SKIP(0)
      if (lookahead == 'f') ADVANCE(29);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '{') ADVANCE(44);
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '?') SKIP(1)
      if (lookahead == '}') ADVANCE(45);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == 'e') ADVANCE(8);
      END_STATE();
    case 3:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 6:
      if (lookahead == 'p') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'p') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 10:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 12:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'u') ADVANCE(11);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '#') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == '?') SKIP(16)
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__comment_char);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__comment_char);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__comment_contents);
      if (lookahead == '#') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ' ||
          lookahead == '?') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__comment_contents);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_input);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_input);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_filter);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_output);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_output);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'e') ADVANCE(34);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'i') ADVANCE(30);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'l') ADVANCE(35);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'p') ADVANCE(40);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'p') ADVANCE(41);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'r') ADVANCE(25);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 't') ADVANCE(28);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 't') ADVANCE(23);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 't') ADVANCE(27);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'u') ADVANCE(38);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == 'u') ADVANCE(37);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_plugin_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__plugin_open);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__plugin_close);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 16},
  [2] = {.lex_state = 16},
  [3] = {.lex_state = 16},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 16},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 16},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__comment_char] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [anon_sym_output] = ACTIONS(1),
    [aux_sym_plugin_name_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__plugin_open] = ACTIONS(1),
    [sym__plugin_close] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(13),
    [sym_comment] = STATE(1),
    [sym_plugin_section] = STATE(7),
    [sym_plugin_type] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__comment_char] = ACTIONS(3),
    [anon_sym_input] = ACTIONS(7),
    [anon_sym_filter] = ACTIONS(7),
    [anon_sym_output] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
    STATE(3), 1,
      aux_sym_source_file_repeat1,
    STATE(7), 1,
      sym_plugin_section,
    STATE(14), 1,
      sym_plugin_type,
    ACTIONS(7), 3,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [24] = 6,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_plugin_section,
    STATE(14), 1,
      sym_plugin_type,
    STATE(3), 2,
      sym_comment,
      aux_sym_source_file_repeat1,
    ACTIONS(13), 3,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [46] = 7,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(16), 1,
      aux_sym_plugin_name_token1,
    ACTIONS(18), 1,
      sym__plugin_close,
    STATE(4), 1,
      sym_comment,
    STATE(6), 1,
      aux_sym_plugin_section_repeat1,
    STATE(10), 1,
      sym_plugin,
    STATE(17), 1,
      sym_plugin_name,
  [68] = 7,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(16), 1,
      aux_sym_plugin_name_token1,
    ACTIONS(20), 1,
      sym__plugin_close,
    STATE(4), 1,
      aux_sym_plugin_section_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(10), 1,
      sym_plugin,
    STATE(17), 1,
      sym_plugin_name,
  [90] = 6,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(22), 1,
      aux_sym_plugin_name_token1,
    ACTIONS(25), 1,
      sym__plugin_close,
    STATE(10), 1,
      sym_plugin,
    STATE(17), 1,
      sym_plugin_name,
    STATE(6), 2,
      sym_comment,
      aux_sym_plugin_section_repeat1,
  [110] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    STATE(7), 1,
      sym_comment,
    ACTIONS(27), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [123] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    STATE(8), 1,
      sym_comment,
    ACTIONS(29), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [136] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    STATE(9), 1,
      sym_comment,
    ACTIONS(31), 4,
      ts_builtin_sym_end,
      anon_sym_input,
      anon_sym_filter,
      anon_sym_output,
  [149] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    STATE(10), 1,
      sym_comment,
    ACTIONS(33), 2,
      aux_sym_plugin_name_token1,
      sym__plugin_close,
  [160] = 4,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(35), 1,
      aux_sym_plugin_name_token1,
    STATE(11), 1,
      sym_comment,
    STATE(20), 1,
      sym_plugin_content,
  [173] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    STATE(12), 1,
      sym_comment,
    ACTIONS(37), 2,
      aux_sym_plugin_name_token1,
      sym__plugin_close,
  [184] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(39), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym_comment,
  [194] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(41), 1,
      sym__plugin_open,
    STATE(14), 1,
      sym_comment,
  [204] = 3,
    ACTIONS(43), 1,
      sym__comment_char,
    ACTIONS(45), 1,
      sym__comment_contents,
    STATE(15), 1,
      sym_comment,
  [214] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(47), 1,
      sym__plugin_open,
    STATE(16), 1,
      sym_comment,
  [224] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(49), 1,
      sym__plugin_open,
    STATE(17), 1,
      sym_comment,
  [234] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(51), 1,
      sym__plugin_open,
    STATE(18), 1,
      sym_comment,
  [244] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(53), 1,
      sym__plugin_close,
    STATE(19), 1,
      sym_comment,
  [254] = 3,
    ACTIONS(3), 1,
      sym__comment_char,
    ACTIONS(55), 1,
      sym__plugin_close,
    STATE(20), 1,
      sym_comment,
  [264] = 1,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 68,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 123,
  [SMALL_STATE(9)] = 136,
  [SMALL_STATE(10)] = 149,
  [SMALL_STATE(11)] = 160,
  [SMALL_STATE(12)] = 173,
  [SMALL_STATE(13)] = 184,
  [SMALL_STATE(14)] = 194,
  [SMALL_STATE(15)] = 204,
  [SMALL_STATE(16)] = 214,
  [SMALL_STATE(17)] = 224,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 244,
  [SMALL_STATE(20)] = 254,
  [SMALL_STATE(21)] = 264,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(18),
  [16] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2), SHIFT_REPEAT(16),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 3),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_section, 4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_plugin_section_repeat1, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin, 4),
  [39] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_name, 1),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_type, 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_plugin_content, 1),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_logstash(void) {
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
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
