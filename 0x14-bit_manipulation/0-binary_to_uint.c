#include <string.h>
#include "main.h"
#include <math.h>

/**
 * power - calculate the power of the base
 * @base: the base
 * @exponent: the exponent
 * Return: the power of base elevated to exponent
 */
unsigned int power(unsigned int base, int exponent)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < exponent; i++)
		result *= base;
	return (result);
}
/**
 * binary_to_uint - convert from binary to unit
 * @b: string containing the number in binary base
 * Return: the converted number or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0, len;

	if (!b)
		return (0);
	len = strlen(b);
	for (; i < len; i++)
	{
		if (b[i] == '1')
		{
			result += power(2, len - i - 1);
		}
		else if (b[i] == '0')
		{
			result *= 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
