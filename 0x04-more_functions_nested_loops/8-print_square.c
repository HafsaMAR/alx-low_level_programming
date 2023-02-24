#include "main.h"
/**
 * print_square - print a square of #'s given size
 * @size: size to draw
 */
void print_square(int size)
{
	int lign, column;
	if (size > 0)
	{
		for (lign = 1; lign <= size; lign++)
		{
			for (column = 1; column <= size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
