module.exports = grammar({
  name: 'cognate',

  extras: $ => [
    $.line_comment,
    $.inline_comment,
    $.multiline_comment,
    /\s/,  // FIXME: How whitespace-sensitive is Cognate?
  ],

  word: $ => $.identifier,

  rules: {
    source_file: $ => $._many_statements,

    /* Statements */
    _statement: $ => repeat1(choice($.identifier, $._literal, $.block)),
    statement: $ => seq($._statement, ';'),
    _many_statements: $ => seq(repeat($.statement), alias($._statement, $.statement), optional(';')),

    block: $ => seq('(', optional($._many_statements), ')'),

    /* Atoms */
    identifier: $ => /[A-Z-?!'+/*>=<^][a-zA-Z0-9-?!'+/*>=<^]*/,

    number: $ => token(choice(/\d+/, seq(/\d+/, '.', /\d+/))),
    string: $ => /"[^"]*"/,
    symbol: $ => /\\[a-zA-Z0-9-?!'+/*>=<^]+/,
    boolean: $ => choice('True', 'False'),
    _literal: $ => choice($.number, $.string, $.symbol, $.boolean),

    /* Others */
    line_comment: $ => seq('~~', /[^\r\n]*/),
    // TODO: Join multiple inline comment words together (adding a repeat1() here panics)
    inline_comment: $ => /[a-z][A-Za-z0-9-?!'+/*>=<^]*/,
    multiline_comment: $ => seq('~', /[^~]+/, '~'),
  }
});
