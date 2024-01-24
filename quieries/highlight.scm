; Keywords

[
	"input"
	"output"
	"filter"
] @keyword

((identifier) @keyword
 (#match? @keyword "^(private|protected|public)$"))

; Literals

[
  (string)
  (bareword)
] @string

(regex) @string.special.regex
(escape_sequence) @escape

[
  (number)
] @number

[
  (nil)
  (true)
  (false)
]@constant.builtin

(interpolation
  "%{" @punctuation.special
  "}" @punctuation.special) @embedded

(comment) @comment

; Operators

[
"="
"=>"
"->"
] @operator

[
  ","
  ";"
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
