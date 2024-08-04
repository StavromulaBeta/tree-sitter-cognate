#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 25
#define LARGE_STATE_COUNT 15
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_SEMI = 2,
  anon_sym_LPAREN = 3,
  anon_sym_RPAREN = 4,
  sym_number = 5,
  sym_string = 6,
  sym_symbol = 7,
  anon_sym_TILDE_TILDE = 8,
  aux_sym_line_comment_token1 = 9,
  sym_inline_comment = 10,
  anon_sym_TILDE = 11,
  aux_sym_multiline_comment_token1 = 12,
  sym_source_file = 13,
  aux_sym__statement = 14,
  sym_statement = 15,
  sym__many_statements = 16,
  sym_block = 17,
  sym__literal = 18,
  sym_line_comment = 19,
  sym_multiline_comment = 20,
  aux_sym__many_statements_repeat1 = 21,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [sym_number] = "number",
  [sym_string] = "string",
  [sym_symbol] = "symbol",
  [anon_sym_TILDE_TILDE] = "~~",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_inline_comment] = "inline_comment",
  [anon_sym_TILDE] = "~",
  [aux_sym_multiline_comment_token1] = "multiline_comment_token1",
  [sym_source_file] = "source_file",
  [aux_sym__statement] = "_statement",
  [sym_statement] = "statement",
  [sym__many_statements] = "_many_statements",
  [sym_block] = "block",
  [sym__literal] = "_literal",
  [sym_line_comment] = "line_comment",
  [sym_multiline_comment] = "multiline_comment",
  [aux_sym__many_statements_repeat1] = "_many_statements_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [sym_symbol] = sym_symbol,
  [anon_sym_TILDE_TILDE] = anon_sym_TILDE_TILDE,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_inline_comment] = sym_inline_comment,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [aux_sym_multiline_comment_token1] = aux_sym_multiline_comment_token1,
  [sym_source_file] = sym_source_file,
  [aux_sym__statement] = aux_sym__statement,
  [sym_statement] = sym_statement,
  [sym__many_statements] = sym__many_statements,
  [sym_block] = sym_block,
  [sym__literal] = sym__literal,
  [sym_line_comment] = sym_line_comment,
  [sym_multiline_comment] = sym_multiline_comment,
  [aux_sym__many_statements_repeat1] = aux_sym__many_statements_repeat1,
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
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_inline_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multiline_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym__many_statements] = {
    .visible = false,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multiline_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__many_statements_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_statement,
  },
  [2] = {
    [1] = sym_statement,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__statement, 2,
    aux_sym__statement,
    sym_statement,
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
};

static TSCharacterRange sym_identifier_character_set_1[] = {
  {'!', '!'}, {'\'', '\''}, {'*', '+'}, {'-', '-'}, {'/', '9'}, {'<', '?'}, {'A', 'Z'}, {'^', '^'},
  {'a', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '(') ADVANCE(7);
      if (lookahead == ')') ADVANCE(8);
      if (lookahead == ';') ADVANCE(6);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '~') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(19);
      if (lookahead == '!' ||
          ('\'' <= lookahead && lookahead <= '+') ||
          lookahead == '-' ||
          lookahead == '/' ||
          ('<' <= lookahead && lookahead <= '?') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '^') ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(12);
      if (lookahead != 0) ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '~') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 4:
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_identifier);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(10);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_string);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_symbol);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(13);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_TILDE_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '~') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == 0x0b ||
          lookahead == '\f' ||
          lookahead == ' ') ADVANCE(16);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_inline_comment);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_inline_comment);
      if (set_contains(sym_identifier_character_set_1, 9, lookahead)) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '~') ADVANCE(14);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_TILDE);
      if (lookahead == '~') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(18);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_multiline_comment_token1);
      if (lookahead != 0 &&
          lookahead != '~') ADVANCE(24);
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
      ACCEPT_TOKEN(ts_builtin_sym_end);
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
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 0},
  [23] = {(TSStateId)(-1)},
  [24] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [sym_multiline_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [sym_symbol] = ACTIONS(1),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [aux_sym__statement] = STATE(5),
    [sym_statement] = STATE(15),
    [sym__many_statements] = STATE(17),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(1),
    [sym_multiline_comment] = STATE(1),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [2] = {
    [aux_sym__statement] = STATE(5),
    [sym_statement] = STATE(15),
    [sym__many_statements] = STATE(18),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(2),
    [sym_multiline_comment] = STATE(2),
    [aux_sym__many_statements_repeat1] = STATE(6),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(15),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [3] = {
    [aux_sym__statement] = STATE(4),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(3),
    [sym_multiline_comment] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(17),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [4] = {
    [aux_sym__statement] = STATE(4),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(4),
    [sym_multiline_comment] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_identifier] = ACTIONS(23),
    [anon_sym_SEMI] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(26),
    [anon_sym_RPAREN] = ACTIONS(21),
    [sym_number] = ACTIONS(29),
    [sym_string] = ACTIONS(29),
    [sym_symbol] = ACTIONS(29),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [5] = {
    [aux_sym__statement] = STATE(4),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(5),
    [sym_multiline_comment] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(32),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(34),
    [anon_sym_LPAREN] = ACTIONS(11),
    [anon_sym_RPAREN] = ACTIONS(32),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [6] = {
    [aux_sym__statement] = STATE(3),
    [sym_statement] = STATE(15),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(6),
    [sym_multiline_comment] = STATE(6),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [7] = {
    [aux_sym__statement] = STATE(8),
    [sym_statement] = STATE(15),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(7),
    [sym_multiline_comment] = STATE(7),
    [aux_sym__many_statements_repeat1] = STATE(7),
    [sym_identifier] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(39),
    [sym_number] = ACTIONS(42),
    [sym_string] = ACTIONS(42),
    [sym_symbol] = ACTIONS(42),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [8] = {
    [aux_sym__statement] = STATE(4),
    [sym_block] = STATE(11),
    [sym__literal] = STATE(11),
    [sym_line_comment] = STATE(8),
    [sym_multiline_comment] = STATE(8),
    [sym_identifier] = ACTIONS(9),
    [anon_sym_SEMI] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(11),
    [sym_number] = ACTIONS(13),
    [sym_string] = ACTIONS(13),
    [sym_symbol] = ACTIONS(13),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [9] = {
    [sym_line_comment] = STATE(9),
    [sym_multiline_comment] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(47),
    [sym_identifier] = ACTIONS(47),
    [anon_sym_SEMI] = ACTIONS(47),
    [anon_sym_LPAREN] = ACTIONS(47),
    [anon_sym_RPAREN] = ACTIONS(47),
    [sym_number] = ACTIONS(47),
    [sym_string] = ACTIONS(47),
    [sym_symbol] = ACTIONS(47),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [10] = {
    [sym_line_comment] = STATE(10),
    [sym_multiline_comment] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(49),
    [sym_identifier] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(49),
    [anon_sym_LPAREN] = ACTIONS(49),
    [anon_sym_RPAREN] = ACTIONS(49),
    [sym_number] = ACTIONS(49),
    [sym_string] = ACTIONS(49),
    [sym_symbol] = ACTIONS(49),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [11] = {
    [sym_line_comment] = STATE(11),
    [sym_multiline_comment] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(51),
    [sym_identifier] = ACTIONS(51),
    [anon_sym_SEMI] = ACTIONS(51),
    [anon_sym_LPAREN] = ACTIONS(51),
    [anon_sym_RPAREN] = ACTIONS(51),
    [sym_number] = ACTIONS(51),
    [sym_string] = ACTIONS(51),
    [sym_symbol] = ACTIONS(51),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [12] = {
    [sym_line_comment] = STATE(12),
    [sym_multiline_comment] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym_identifier] = ACTIONS(53),
    [anon_sym_SEMI] = ACTIONS(53),
    [anon_sym_LPAREN] = ACTIONS(53),
    [anon_sym_RPAREN] = ACTIONS(53),
    [sym_number] = ACTIONS(53),
    [sym_string] = ACTIONS(53),
    [sym_symbol] = ACTIONS(53),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [13] = {
    [sym_line_comment] = STATE(13),
    [sym_multiline_comment] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(55),
    [sym_number] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_symbol] = ACTIONS(57),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
  [14] = {
    [sym_line_comment] = STATE(14),
    [sym_multiline_comment] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym_identifier] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(57),
    [anon_sym_RPAREN] = ACTIONS(59),
    [sym_number] = ACTIONS(57),
    [sym_string] = ACTIONS(57),
    [sym_symbol] = ACTIONS(57),
    [anon_sym_TILDE_TILDE] = ACTIONS(3),
    [sym_inline_comment] = ACTIONS(5),
    [anon_sym_TILDE] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    STATE(15), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(61), 5,
      anon_sym_LPAREN,
      sym_identifier,
      sym_number,
      sym_string,
      sym_symbol,
  [21] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    STATE(16), 2,
      sym_line_comment,
      sym_multiline_comment,
    ACTIONS(57), 5,
      anon_sym_LPAREN,
      sym_identifier,
      sym_number,
      sym_string,
      sym_symbol,
  [42] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_line_comment,
      sym_multiline_comment,
  [59] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(18), 2,
      sym_line_comment,
      sym_multiline_comment,
  [76] = 5,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(67), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(69), 1,
      aux_sym_line_comment_token1,
    ACTIONS(71), 1,
      sym_inline_comment,
    STATE(19), 2,
      sym_line_comment,
      sym_multiline_comment,
  [93] = 5,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(20), 2,
      sym_line_comment,
      sym_multiline_comment,
  [110] = 5,
    ACTIONS(7), 1,
      anon_sym_TILDE,
    ACTIONS(67), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(71), 1,
      sym_inline_comment,
    ACTIONS(75), 1,
      aux_sym_multiline_comment_token1,
    STATE(21), 2,
      sym_line_comment,
      sym_multiline_comment,
  [127] = 4,
    ACTIONS(3), 1,
      anon_sym_TILDE_TILDE,
    ACTIONS(5), 1,
      sym_inline_comment,
    ACTIONS(77), 1,
      anon_sym_TILDE,
    STATE(22), 2,
      sym_line_comment,
      sym_multiline_comment,
  [141] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [145] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(15)] = 0,
  [SMALL_STATE(16)] = 21,
  [SMALL_STATE(17)] = 42,
  [SMALL_STATE(18)] = 59,
  [SMALL_STATE(19)] = 76,
  [SMALL_STATE(20)] = 93,
  [SMALL_STATE(21)] = 110,
  [SMALL_STATE(22)] = 127,
  [SMALL_STATE(23)] = 141,
  [SMALL_STATE(24)] = 145,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(11),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2, 0, 0), SHIFT_REPEAT(9),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 1, 0, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 2, 0, 1),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_statement, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__many_statements, 3, 0, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__many_statements_repeat1, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 2, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiline_comment, 3, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_cognate(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
