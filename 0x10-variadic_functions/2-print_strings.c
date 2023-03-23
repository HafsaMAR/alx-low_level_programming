#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - function that prints strings
 * @seperator: input string in between strings
 * @n: number of strings passed to the function
 * Return: 0 (success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned char *string;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(x, unsigned char *);
		if (*separator)
		{
			printf("%s", string);
			if (i < n - 1)
				printf("%s", separator);
		}
		else
		{
			printf("%s", string);
		}
	}
	va_end(x);
	printf("\n");
}
