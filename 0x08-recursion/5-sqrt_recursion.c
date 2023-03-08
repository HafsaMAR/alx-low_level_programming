#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer
 * Return: natural root square or -1
 */
int _is_it_root(int rt, int n)
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (_is_it_root(rt + 1, n));
}

/**
 * _is_it_root - function that confirms the natural square root
 * @rt: integer counter
 * @n: input to which we find the natural root
 * Return: integer the natural root (success)
 */
int _is_it_root(int rt, int n)
{
	if (rt * rt == n)
	{
		return (rt);
	}
	return (rt + 1, n);
}
