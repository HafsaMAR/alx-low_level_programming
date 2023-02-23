#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry point
 * Description: print numbers from 0 to 9 followed by a new line
 * Return: void
 */
void print_numbers(void)
{
	int i;
	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
