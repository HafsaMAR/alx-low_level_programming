int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (!n || index > sizeof (unsigned int) * 8)
	{
		return (-1);
	}
	*n |= mask;
	return (1);
}
