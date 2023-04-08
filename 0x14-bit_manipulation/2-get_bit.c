#include <stdlib.h>

/**
 * power - return the power of numbe by exp
 * @num: unput number
 * @ex: power
 * Return: value
 */

unsigned long int power(int num, unsigned long int ex)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < ex; i++)
	{
		if (ex == 0)
			return (1);
		result *= num;
	}
	return (result);
}

/**
 * greatest_2_exp - gives the greatest power of 2 less that n
 * @n: input number
 * Return: exp of 2
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
 * get_bit - returns the value in the given index
 * @n: input number
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int *array;
	unsigned long int max, i, result;

	max = greatest_2_exp(n);
	result = 0;
	if (index > max)
		return (-1);
	i = 0;
	array = malloc(max * sizeof(unsigned long int));
	if (!array)
		return (-1);
	while (n && i <= max)
	{
		*(array + max - i) = n % 2;
		n /= 2;
		i++;
	}
	result = *(array + max - index);
	free(array);
	return (result);
}
