#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * power - function to find the power of number
 * @num: number input
 * @exp: power
 * Return: result of the power of num by exp
 */
unsigned int power(int num, unsigned int exp)
{
	unsigned int i, result;

	result = 1;
	if (exp == 0)
		return (1);
	for (i = 0; i < exp; i++)
	{
		result *= num;
	}
	return (result);
}

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: input string
 * Return: result of conversion or 0 in failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int p, len, i, sum;

	i = 0;
	sum = 0;
	if (!b)
		return (0);
	len = strlen(b);
	while (i < len)
	{
		if (*(b + i) != '1' && *(b + i) != '0')
			return (0);
		p = power(2, i);
		sum += (*(b + len - 1 - i) - '0') * p;
		i++;
	}
	return (sum);
}
