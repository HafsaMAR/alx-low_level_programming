#include "main.h"

/**
 * _pow_recursion - function that returns the value of x
 * raised to the power of y
 * @x: input
 * @y: input
 * Return: value of x raised of -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (_pow_recursion(x, y + 1) / x);
	return (_pow_recursion(x, y + 1) * x);
}
