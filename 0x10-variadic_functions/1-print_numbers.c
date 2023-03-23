#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers
 * @separator: string between numbes
 * @n: number of integer passed to the function
 * Return: 0 success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, op;
	va_list x;

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		op = va_arg(x, unsigned int);
		if (*separator)
			printf("%d%s ", op, separator);
		else
			printf("%x ", n);
	}
	va_end(x);
	printf("\n");
}
