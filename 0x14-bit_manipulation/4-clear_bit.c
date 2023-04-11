/**
 * clear_bit - set a digit at index to 0
 * @n: pointer to variable
 * @index: index of digit
 * Return: 1 success -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int comp;

	if (!n)
		return (-1);
	comp = ~(1UL << index);
	*n &= comp;
	return (1);
}
