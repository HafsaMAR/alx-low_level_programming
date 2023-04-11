/**
 * set_bit - set the value of bit to 1 at the given index
 * @n: pointer to variable
 * @index: index
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (!n || index > sizeof(unsigned int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
