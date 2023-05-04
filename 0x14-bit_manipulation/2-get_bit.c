#include "main.h"

/**
 * get_bit - return the valus of the bit at a given index
 * @n: number in decimal base
 * @index: index wanted
 * Return: the bit in succes or -1 otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (!n)
		return (-1);
	n >>= index;
	return (n & 1);
}
