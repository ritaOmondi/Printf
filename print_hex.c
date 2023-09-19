#include "main.h"
/**
 * printf_hexadecimal - prints hexadeimal number
 * @args: argument input
 * @specifier: input
 * Return: counter
 */
int printf_hexadecimal(va_list args, char specifier)
{
unsigned int n = va_arg(args, unsigned int);
char hex[16];
int count = 0;
int i = 0;
int j;

do {
int remainder = n % 16;
if (remainder < 10)
{
hex[i] = remainder + '0';
}
else
{
hex[i] = remainder - 10 + specifier;
}
n /= 16;
i++;
} while (n > 0);
for (j = i - 1; j >= 0; j--)
{
_putchar(hex[j]);
count++;
}
return (count);
}
