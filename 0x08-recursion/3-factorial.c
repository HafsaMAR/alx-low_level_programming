#include <stdio.h>
#include "main.h"
/**
 * factorial - function that returns the factorial of a given number
 * @n: input int
 * Return: 0 (success) or -1 when n < 0
 */
int factorial(int n)
{
	int fact;

	if ((n == 0) || (n == 1))
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
