#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print number n to 98
 * @n: integer argument
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			if (n < 10)
			{
				_putchar('0' + n);
			}
			else if (n >= 10)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else if (n > 98)
		while (n > 98)
		{
			if (n < 100)
			{
				_putchar('0' + (n / 10));
				_putchar('0' + (n % 10));
			}
			else
			{
				_putchar('0' + (n / 100));
				_putchar('0' + (((n - ((n / 100) * 100))) / 10));
				_putchar('0' + (((n - ((n / 100) * 100))) % 10));
			}
			_putchar(',');
			_putchar(' ');
			n--;
		}
	_putchar('0' + 98 / 10);
	_putchar('0' + 98 % 10);
	_putchar('\n');
}
