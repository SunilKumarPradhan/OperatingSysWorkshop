/*Consider the following C expressions;
(a) Suppose that i is an integer variable whose value is 7,
and f is a floating-point variable whose value is 8.5. The
expression (i + f)%4 is valid or invalid.
(b) Suppose that i is an integer variable whose value is 7,
and f is a floating-point variable whose value is 8.5. The
expression ((int)(i + f))%4 is valid or invalid.*/


//ANSWERS

/*Not valid. Mixing integer and floating-point types in % operation results in type conflict. Use casting for compatibility.*/
/* Valid. The expression (int)(i + f) converts the result of the addition to an integer type.*/