#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
int _printf(const char *format, ...);
int _putchar(char c);
void print_binary(unsigned int num);
<<<<<<< HEAD
int calculate_number_of_digits(unsigned int num, int base);
int prints_write(char buffer[], size_t);

=======
void  _integer(int num);
int calculate_number_of_digits(unsigned int num, int base);
void convert_unsigned_decimal(va_list args);
void convert_octal(va_list args);
void _isLower(va_list args);
void _isUpper(va_list args);
>>>>>>> 7b032504d70b19a16de6d266b875f940c4fe3494
#endif
