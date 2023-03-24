#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: lit of type of arguments
 * Return: 0 (success)
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s, array[] = "ifcs";
	va_list x;

	i = 0;
	while (array[i])
	{
		if (format[i] == array[i])
			printf(", ");
		i++;
	}
	va_start(x, format);
	while (*format)
	{
		switch (*format)
		{
			case 'i':
				printf("%d", (int) va_arg(x, int));
				break;
			case 'f':
				printf("%f", (float) va_arg(x, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(x, int));
				break;
			case 's':
				s = va_arg(x, char*);
				if (!s)
				{
				printf("(nil)");
				break;
				}
				printf("%s", s);
				break;
		}
	}
	printf("\n");
	va_end(x);
}
