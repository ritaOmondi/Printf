#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"

/**
 * argu_prints - function that prints an argument
 * according to its type
 * @src: Source of the argument
 * @...: Others
 * Return: The pointer to the character
 */
int argu_prints(const char *src, ...)
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
}
