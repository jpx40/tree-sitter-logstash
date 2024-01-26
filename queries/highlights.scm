; Keywords

[
	"input"
	"output"
	"filter"
] @keyword

[

	"if"
	"else"
	"elseif"
] @keyword.conditional

[
	(plugin_name)
] @keyword.function

; Literals

[
  (string)
  (bareword)
] @string

(regexp) @string.special.regex

[
  (number)
] @number

[
	(true)
	(false)
] @boolean

(comment) @comment

; Operators
[
  "!"
  "=="
  "=~"
  "!~"
] @operator

[
  ","
  "."
] @punctuation.delimiter

[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

(selector_element) @variable.parameter
