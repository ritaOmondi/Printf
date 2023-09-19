#include <stdio.h>
#include "main.h"

/**
 * prints_write - function that prints the value of a pointer
 * @char: Declares a character  buffer
 * @size_t: Declares variable to store length of formatted
 * string
 * Return: characters printed
 */
int prints_write(char buffer[], size_t)
{
		int num = 42;
		char buffer[1024];
		size_t length;

		length = snprintf(buffer, sizeof(buffer), "Using %%d specifier: %d\n", num);

		if (length < 0)
		{
			perror("snprintf");
			return (1);
		}
		if (length >= sizeof(buffer))
		{
			fprintf(stderr, "Output truncated\n");
			return (1);
		}
		if (fwrite(buffer, 1, length, stdout) != length)
		{
			perror("fwrite");
			return (1);
		}

		return (0);
}
