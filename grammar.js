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
		"\"",
		$.double_contents,
		"\""
	),

	single_quoted_string: $ => seq(
		"\'",
		$.single_contents,
		"\'"
	),

	double_contents: $ => /[^"]+/,

	single_contents: $ => /[^']+/,

	number: $ => seq(optional("-"), /[0-9]+/, optional(seq(".", repeat(/[0-9]/)))),
	bareword: $ => /[A-Za-z_][A-Za-z0-9_]+/,
	boolean_operator: $ => choice("and", "or", "xor", "nand"),
	regexp_operator: $ => choice("=~", "!~"),
	regexp: $ => seq("/", repeat(choice("\\/", /[^\/]/)) ,"/"),
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
		repeat($.branch_or_plugin),
		$._plugin_close,
	),

	plugin_type: $ => choice('input', 'filter', 'output'),
	plugin_name: $ => /[A-Za-z0-9_-]+/,
	plugin_content: $ => /[A-Za-z0-9_-]+/,

	plugin: $ => seq(
		$.plugin_name,
		"{",
		field("attributes", optional(seq($.attribute))),
		"}",
	),

	name: $ => choice(
		/[A-Za-z0-9_-]+/,
		$.string
	),

	attribute: $ => seq(
		$.name,
		"=>",
		$.value,
		/\s*\r?\n/
	),

	branch: $ => seq(
		$.if,
		repeat($.else_if),
		optional($.else)
	),

	if: $ => seq("if", $.condition, "{", repeat($.branch_or_plugin), "}"),
	else_if: $ => seq("else", "if", $.condition, "{", repeat($.branch_or_plugin), "}"),
	else: $ => seq("else", $.condition, "{", repeat($.branch_or_plugin), "}"),

	condition: $ => seq($.expression, repeat(seq($.boolean_operator, $.expression))),

	expression: $ => choice(
		seq("(", $.condition, ")"),
		$.negative_expression,
		$.in_expression,
		$.not_in_expression,
		$.compare_expression,
		$.regexp_expression,
		$.rvalue
	),

	negative_expression: $ => choice(
		seq("!", "(", $.condition, ")"),
		seq("!", $.selector)
	),
	in_expression: $ => seq($.rvalue, $.in_operator, $.rvalue),
	in_operator: $ => "in",
	not_in_expression: $ => seq($.rvalue, $.not_in_operator, $.rvalue),
	not_in_operator: $ => seq("not", "in"),

	regexp_expression: $ => seq($.rvalue, $.regexp_operator, choice($.string, $.regexp)),

	rvalue: $ => choice(
		$.string,
		$.number,
		$.selector,
		$.array,
		$.method_call,
		$.regexp,
	),

	value: $ => choice(
		$.plugin,
		$.bareword,
		$.string,
		$.number,
		$.array,
		$.hash
	),

	array_value: $ => choice(
		$.bareword,
		$.string,
		$.number,
		$.array,
		$.hash
	),

	selector: $ => repeat1($.selector_element),
	selector_element: $ => /\[[^\]\[,]+\]/,

	array: $ => seq(
		"[",
		optional(seq($.value, repeat(seq(",", $.value)))),
		"]"
	),

	hash: $ => seq(
		"{",
		optional($.hashentries),
		"}",
	),

	hashentries: $ => seq(
		$.hashentry, repeat($.hashentry)
	),

	hashentry: $ => seq(
		choice($.number, $.bareword, $.string),
		"=>",
		$.value
	),

	method_call: $ => seq(
		$.method, "(", optional(seq($.rvalue, repeat(seq(",", $.rvalue)))), ")"
	),

	method: $ => $.bareword,

	compare_expression: $ => seq(
		$.rvalue, $.compare_operator, $.rvalue,
	),

	compare_operator: $ => choice(
		"==", "!=", "<=", ">=", "<", ">"
	),

	branch_or_plugin: $ => prec(15, choice(
		$.branch,
		$.plugin
	)),

	_string_start: $ => "\"",
	_string_end: $ => "\"",
	_plugin_open: $ => "{",
	_plugin_close: $ => "}",
  }
});

