
/**
 * power - return the power of numbe by exp
 * @num: unput number
 * @ex: power
 * Return: value
 */

unsigned long int power(int num, unsigned long int exp)
{
	unsigned int i, result;

	result = 1;
	if (exp == 0)
	{
		return (1);
	}
	for (i = 0; i < exp; i++)
	{
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
	unsigned long int i = 1;

	while (n >= power(2, i + 1))
	{
		i++;
	}
	return (i);
}

/**
 * set_bit - set the value at the given index to 1
 * @n: pointer to variable
 * @index: the index of digit to change
 * Return: 1 (success) -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max, mask = 1UL << index;

	max = greatest_2_exp(*n);
	if (index > max)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
