#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: input integer
 * @rt: function that accepts an input saved into rt
 * Return: natural root square or -1
 */
int _is_it_root(int rt, int n);
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
	return (_is_it_root(n, rt + 1));
}

/**
 * _is_it_root - function that confirms the natural square root
 * @n: input to which we find the natural root
 * @rt: input from _sqrt_recursion function
 * Return: integer the natural root (success)
 */
int _is_it_root(int n, int rt)
{
	if ((rt * rt) == n)
	{
		return (rt);
	}
	return (_is_it_root(n, rt + 1));
}
