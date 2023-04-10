/**
 * get_bit - returns the value in the given index
 * @n: input number
 * @index: index
 * Return: value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index > (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	return ((n & mask) >> index);
}
