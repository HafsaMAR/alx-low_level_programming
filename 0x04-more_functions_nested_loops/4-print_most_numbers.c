#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - entry point
 * Description: prints numbers from 0 to 9, skip 2 and 4
 * Returrn: 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
