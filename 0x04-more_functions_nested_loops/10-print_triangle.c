#include "main.h"
/**
 * print_triangle - print triangle with #'s with given size
 * @size: size of triangle to draw
 */
void print_triangle(int size)
{
	int height;
	int width;
	int n;
	
	if (size <= 0)
		_putchar('\n');
	for (height > 0; height <= size; height++)
	{
		for (width > 0; width <= (size - height); width++)
			_putchar(' ');
		for (n > 0; n <= height; n)
			_putchar('#');
		_putchar('\n');
	}
}
