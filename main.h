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
int convert_octal(va_list args);
int prints_write(char buffer[], size_t);
void _integer(int num);
int handle_unsigned(va_list args);
int printf_hexadecimal(va_list args, char specifier);
int custom_string(va_list args);
#endif
