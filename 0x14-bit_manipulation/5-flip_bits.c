

/**
 * get_bit - get the value in each bit
 * @n: input number
 * @index: position of bit
 * Return: the value stored at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) != 0);
}

/**
 * flip_bits - compare to number in binary presentation
 * @n: input num
 * @m: input num
 * Return: number of bits to flip to move from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	if (get_bit(n, 0) == -1 || get_bit(m, 0) == -1)
		return (-1);
	while (n || m)
	{
		if (get_bit(n, 0) != get_bit(m, 0))
			i++;
		n = n >> 1;
		m = m >> 1;
	}
	return (i);
}
