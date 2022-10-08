#include <iostream>     // handled by preprocessor

// All of hte following statements are part of the global namespace
void foo(); // okay: function forward declaration in the global namespace
int x;      // compiles but strongly discoraged: uninitialized variable definition in the global namespace
int y{5};   // compiles but discouraged: varible definition with initializer in the global namespace
x = 5;      // compile error: executable statements are not allowed in the global namespace

int main()  // okay: function definition in the global namespace
{
    return 0;
}

void goo();     // okay: another function forward declaration in the global namespace.
