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
int calculate_number_of_digits(unsigned int num, int base);
int prints_write(char buffer[], size_t);
void  _integer(int num);
void convert_unsigned_decimal(va_list args);
void convert_octal(va_list args);
void _isLower(va_list args);
void _isUpper(va_list args);
#endif
