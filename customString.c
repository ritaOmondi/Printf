#include "main.h"
/**
 * custom_string - prints the string
 * @args: argument input
 * Return: counter
 */
int custom_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;

while (*str)
{
if (*str < 32 || *str >= 127)
{
_printf("\\x%02X", (unsigned char)*str);
count += 4;
}
else
{
_putchar(*str);
count++;
}
str++;
}
return (count);
}
