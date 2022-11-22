// most objects uses is based on its datatype
// the compiler knows how many bytes of data to retrieve, and can handle task for us.
// To generalize, an object with n bits can hold 2^n (2 to the power of n) unique value.
// However for programs that need a large amount of objects or data (game that is rendering millions of polygons)
// the difference between using 1 byte and 8 byte objects can be significant
/*
New programmers often focus too much on optimizing their code to use as little memory as possible.
In most cases, this makes a negligible difference.
Focus on writing maintainable code, and optimize only when and where the benefit will be substantive.
*/
