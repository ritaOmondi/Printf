#include "main.h"
void print_binary(unsigned int num);
void  _integer(int num);
int convert_octal(va_list args);
/**
 * _printf - Function that prints to stdou format
 * @format : Input character
 * @... : other parameters
 *
 * Return: printed character
 */
int _printf(const char *format, ...)
{
int num_digits;
int count = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'b')
{
unsigned int num = va_arg(args, unsigned int);
print_binary(num);
count += calculate_number_of_digits(num, 2);
}
else if (*format == 'c')
{
char c = (char)va_arg(args, int);
_putchar(c);
count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
while (*str != '\0')
{
_putchar(*str);
str++;
count++;
}
}
else if (*format == '%')
{
_putchar('%');
count++;
}
else if (*format == 'o')
            {
                count += convert_octal(args);
            }
else if (*format == 'd' || *format == 'i')
{
int num = va_arg(args, int);
_integer(num);
num_digits = calculate_number_of_digits(num, 10);
if (num < 0)
{
num_digits++;
}
count += num_digits;
}
else
{
_putchar('%');
_putchar(*format);
count += 2;
} 
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
