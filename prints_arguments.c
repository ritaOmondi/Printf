<<<<<<< HEAD
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

=======
#include "main.h"
>>>>>>> 7b032504d70b19a16de6d266b875f940c4fe3494
/**
 * _integer - function that prints an argument
 * @num: Source of the argument
 * Return: Nothing
 */
void  _integer(int num)
{
<<<<<<< HEAD
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
                else if (*src == 'i')
                {
                        char i = (char)va_arg(tally, int);

                        putchar(i);
                        pnt++;
                }
                return (0);
        }
        va_end(tally);
        return (pnt);
=======
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
>>>>>>> 7b032504d70b19a16de6d266b875f940c4fe3494
}
