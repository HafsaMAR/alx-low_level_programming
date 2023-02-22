#include "main.h"
/**
 * times_table - prints the 9 times table, starting from 0.
 * Return: void
 */

void times_table(void)
{
	int i, j, r, f, s;
	r = 0;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (r <= 100 && r >= 10)
				{
					f = r / 10;
					s = r % 10;
					_putchar('0' + f);
					_putchar('0' + s);
				}
				else if (r < 10)
				{
					_putchar(' ');
					_putchar('0' + r);
				}
			}
			else
			{
				_putchar(r + '0');
			}
		}
		_putchar('\n');
	}
}
