; Keywords

[
	"input"
	"output"
	"filter"
	"if"
	"else"
	(plugin_name)
] @keyword

; Literals

[
  (string)
  (bareword)
] @string

(regexp) @string.special.regex

[
  (number)
] @number

(comment) @comment

; Operators

[
"=>"
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
