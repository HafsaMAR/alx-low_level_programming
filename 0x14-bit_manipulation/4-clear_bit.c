
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
		return (1);
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
	unsigned long int i = 0;

	while (n >= power(2, i + 1))
	{
		i++;
	}
	return (i);
}

/**
 * clear_bit - set a digit at index to 0
 * @n: pointer to variable
 * @index: index of digit
 * Return: 1 success -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp,  max = greatest_2_exp(*n);

	if (index > max)
		return (-1);
	comp = ~(1UL << index);
	*n &= comp;
	return (1);
}
