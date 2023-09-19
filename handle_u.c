#include "main.h"
/**
 * handle_unsigned - function that handles unsigned integer
 * @args: argument input
 * Return: number of integers chars printed
 */
int handle_unsigned(va_list args)
{
unsigned int n = va_arg(args, unsigned int);
unsigned int temp = n;
unsigned int divisor = 1;
int count = 0;

while (temp / 10 > 0)
{
divisor *= 10;
temp /= 10;
}
while (divisor > 0)
{
unsigned int digit = n / divisor;
_putchar(digit + '0');
n %= divisor;
divisor /= 10;
count++;
}
return (count);
}
