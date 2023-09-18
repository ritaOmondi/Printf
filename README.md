Prinft Project between Rita Omondi and Alvin Waiganjo.
The printf developed should handle different specifiers like:
c
s
d
x
%
The printf function is a custom implementation that mimics the behavior of the standard printf function in C. It provides a way to format and print output to the standard output stream (stdout). This function supports the conversion specifiers 'c', 's', and '%'.

Function format:
int _printf(const char *format, ...);
The _printf function is used in a similar way to the standard printf function. It takes a format string and a variable number of arguments, and it produces formatted output according to the format string.

The format string can contain regular characters and conversion specifiers. Conversion specifiers start with the '%' character and are followed by a conversion character. The supported conversion characters are:

'c': Print a single character.
's': Print a null-terminated string.
'%': Print a '%' character.
Compilation:
The printf project is compiled with the following flags:
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
