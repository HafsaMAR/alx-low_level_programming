#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: input string
 * Return: result of conversion or 0 in failure
 */
unsigned int power(int num, unsigned int exp)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < exp; i++)
	{
		if (exp == 0)
			return (1);
		else
		{
			result *= num;
		}
	}
		return (result);
}
unsigned int binary_to_uint(const char *b)
{
	unsigned int p, len, i, sum;

	i = 0;
	sum = 0;
	len = strlen(b);
	while (i < len)
	{
		if (!b || (*(b + i) != '1' && *(b + i) != '0'))
			return (0);
		p = power(2, i);
		sum += (*(b + len - 1 - i) - '0') * p;
		i++;
	}
	return (sum);
}
