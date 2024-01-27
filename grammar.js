module.exports = grammar({
	name: 'logstash',

	extras: $ => [
		/\s/,
		/\r?\n/,
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

		code_string: $ => seq(
			"`",
			$.code_contents,
			"`"
		),

		code_contents: $ => /[^`]+/,

		double_contents: $ => /[^"]+/,

		single_contents: $ => /[^']+/,

		number: $ => seq(optional("-"), /[0-9]+/, optional(seq(".", repeat(/[0-9]/)))),
		boolean: $ => choice($.true, $.false),
		true: $ => "true",
		false: $ => "false",
		bareword: $ => /[A-Za-z_][A-Za-z0-9_]+/,
		boolean_operator: $ => choice(prec(4, "and"), prec(4, "or"), prec(3, "xor"), prec(3, "nand")),
		regexp_operator: $ => choice("=~", "!~"),
		regexp: $ => seq("/", repeat(choice("\\/", /[^\/]/)), "/"),
		string: $ => choice(
			$.double_quoted_string,
			$.single_quoted_string,
			$.code_string
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
			"{",
			repeat($.branch_or_plugin),
			"}",
		),

		plugin_type: $ => choice('input', 'filter', 'output'),
		plugin_name: $ => /[A-Za-z0-9_-]+/,
		plugin_content: $ => /[A-Za-z0-9_-]+/,

		plugin: $ => seq(
			alias($.bareword, $.plugin_name),
			"{",
			field("attributes", optional(repeat1($.attribute))),
			"}",
		),

		name: $ => choice(
			/[A-Za-z0-9_-]+/,
			$.string
		),

		arrow: $ => "=>",

		attribute: $ => seq(
			$.name,
			$.arrow,
			$.value
		),

		branch: $ => seq(
			prec(10, $.if),
			prec(9, repeat($.else_if)),
			prec(8, optional($.else))
		),

		if: $ => seq("if", $.condition, "{", repeat($.branch_or_plugin), "}"),
		else_if: $ => seq("elseif", $.condition, "{", repeat($.branch_or_plugin), "}"),
		else: $ => seq("else", $.condition, "{", repeat($.branch_or_plugin), "}"),

		condition: $ => seq($.expression, repeat(seq($.boolean_operator, $.expression))),

		expression: $ => choice(
			prec(10, seq("(", $.condition, ")")),
			prec(9, $.negative_expression),
			prec(8, $.in_expression),
			prec(7, $.not_in_expression),
			prec(6, $.compare_expression),
			prec(5, $.regexp_expression),
			prec(4, $.rvalue)
		),

		negative_expression: $ => choice(
			prec(1, seq("!", "(", $.condition, ")")),
			seq("!", $.selector)
		),
		in_expression: $ => seq($.rvalue, $.in_operator, $.rvalue),
		in_operator: $ => "in",
		not_in_expression: $ => seq($.rvalue, $.not_in_operator, $.rvalue),
		not_in_operator: $ => seq("not", "in"),

		regexp_expression: $ => seq($.rvalue, $.regexp_operator, choice(prec(1,$.string), $.regexp)),

		rvalue: $ => choice(
			prec(10, $.string),
			prec(9, $.number),
			prec(8, $.boolean),
			prec(7, $.selector),
			prec(6, $.array),
			prec(5, $.method_call),
			prec(4, $.regexp),
		),

		value: $ => choice(
			prec(10, $.plugin),
			prec(9, $.bareword),
			prec(8, $.string),
			prec(7, $.number),
			prec(7, $.boolean),
			prec(6, $.array),
			prec(5, $.hash)
		),

		array_value: $ => choice(
			prec(10, $.bareword),
			prec(9, $.string),
			prec(8, $.number),
			prec(7, $.boolean),
			prec(6, $.array),
			prec(5, $.hash)
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
			field("name", choice(prec(10, $.number), prec(9, $.bareword), prec(7, $.string))),
			$.arrow,
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
			prec(10, $.branch),
			prec(9, $.plugin)
		)),
	}
});

