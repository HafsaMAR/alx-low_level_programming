#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - convert from binary to unsigned int
 * @b: input string
 * Return: result of conversion or 0 in failure
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, sum;

	i = 0;
	sum = 0;
	len = strlen(b);
	while (i < len)
	{
		if (!b || (*(b + i) != '1' && *(b + i) != '0'))
			return (0);
		sum += (*(b + len - 1 - i) - '0') * pow(2, i);
		i++;
	}
	return (sum);
}
