#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
/**
 * _integer - function that prints an argument
 * @num: Source of the argument
 * Return: Nothing
 */
void  _integer(int num)
{
        int pnt = 0;
        va_list tally;

        va_start(tally, src);

        while (*src != '\0')
        {
                if (*src == '%')
                {
                        src++;
                }
                else if (*src == 'd')
                {
                        char d = (char)va_arg(tally, int);

                        putchar(d);
                        pnt++;
                }
                else if (*scr == 'i')
                {
                        char i = (char)va_arg(tally, int);

                        putchar(i);
                        pnt++;
                }
        }
        va_end(tally);

char buffer[20];
int index = 0;
int i;

if (num < 0)
{
_putchar('-');
num = -num;
}
if (num == 0)
{
buffer[index++] = '0';
}
else
{
while (num != 0)
{
buffer[index++] = '0' + (num % 10);
num /= 10;
}
}
for (i = index - 1; i < 0; i--)
{
_putchar(buffer[i]);
}
}

