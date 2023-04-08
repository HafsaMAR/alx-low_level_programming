#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * power - finds the exp of number
 * @num: input number
 * @exp: power
 * Return: result
 */
unsigned long int power(int num, unsigned long int exp)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < exp; i++)
	{
		if (exp == 0)
			return (1);
		result *= num;
	}
	return (result);
}

/**
 * greatest_2_exp - finds the greatest power of 2 less that n
 * @: input number
 * Return: the geatest power of 2 less that n
 */

unsigned long int greatest_2_exp(unsigned long int n)
{
	unsigned long int i = 0;

	while (n >= power(2, i + 1))
	{
		i++;
	}
	return (i);
}

/**
 * print_binary - function that prints binary representation of n
 * @n: input number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int ex, max, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	ex = greatest_2_exp(n);
	max = power(2, ex);
	_putchar('1');
	n = n - max;
	if (n == power(2, ex))
	{
		for (i = 0; i <= ex; i++)
		{
			_putchar('0');
		}
		return;
	}
	i = ex - 1;
check:
	if (n == 0)
	{
		return;
	}
	else if (n < power(2, i))
	{
		_putchar('0');
		i--;
		goto check;
	}
	else if (n > power(2, i))
	{
		_putchar('1');
		n -= power(2, i);
		i--;
		goto check;
	}
	if (n == 2)
	{
		_putchar('1');
		_putchar('0');
		n -= 2;
		goto check;
	}
	else if (n == 1)
	{
		_putchar('1');
		n -= 1;
		goto check;
	}
}
