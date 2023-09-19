#include "main.h"
/**
 * convert_octal - Function that converts to octal number
 * @args: argument input
 * Return: nothing
 */
int convert_octal(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    unsigned int temp = num;
    int counter = 0;
    int octal_digits[32]; 
    int i;

    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    while (temp != 0)
    {
        octal_digits[counter] = temp % 8;
        temp /= 8;
        counter++;
    }

    for (i = counter - 1; i >= 0; i--)
    {
        _putchar(octal_digits[i] + '0');
    }

    return counter;
}
