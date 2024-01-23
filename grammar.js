module.exports = grammar({
  name: 'logstash',

  extras: $ => [
	/\s/,
	/[\r?\n]/,
	$.comment
  ],

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => repeat(seq($.plugin_section)),

	double_quoted_string: $ => seq(
		alias($._string_start, "\""),
		$.double_contents,
		alias($._string_end, "\"")
	),

	single_quoted_string: $ => seq(
		alias($._string_start, "\'"),
		$.single_contents,
		alias($._string_end, "\'")
	),

	double_contents: $ => /[^']+/,

	single_contents: $ => /[^']+/,

	string: $ => choice(
		$.double_quoted_string,
		$.single_quoted_string
	),

	cs: $ => repeat1(seq(
		$.comment,
	)),

	_comment_char: $ => "#",

	comment: $ => seq(
		$._comment_char,
		$._comment_contents,
	),

	_comment_contents: $ => /[^\r\n]*/,
	carriage_return: $ => /\r/,
	whitespace: $ => /[ \t]+/,

	plugin_section: $ => seq(
		$.plugin_type,
		$._plugin_open,
		repeat($.plugin),
		$._plugin_close,
	),

	plugin_type: $ => choice('input', 'filter', 'output'),
	plugin_name: $ => /[A-Za-z0-9_-]+/,
	plugin_content: $ => /[A-Za-z0-9_-]+/,

	plugin: $ => seq(
		$.plugin_name,
		$._plugin_open,
		$.plugin_content,
		$._plugin_close,
	),

	branch_or_plugin: $ => $.plugin,

	_string_start: $ => "\"",
	_string_end: $ => "\"",
	_plugin_open: $ => "{",
	_plugin_close: $ => "}",
  }
});

