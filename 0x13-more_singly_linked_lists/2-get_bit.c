#include "main.h"

/**
 * get_bit - return the valus of the bit at a given index
 * @n: number in decimal base
 * @index: index wanted
 * Return: the bit in succes or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_bit_index = sizeof(unsigned long int) * 8 - 1;

	if (!n || index > max_bit_index)
		return (-1);
	n >>= index;
	return (n & 1);
}
