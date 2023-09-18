#include "main.h"
/**
 * print_binary - Function that converts int to binary
 * @int sum: integer input
 *
 * Return: nothing
 */
void print_binary(unsigned int num)
{
if (num > 1)
{
print_binary(num / 2);
}
_putchar('0' + (num % 2));
}
