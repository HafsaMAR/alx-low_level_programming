#include "main.h"

/**
 * flip_bits - return the number of bit to flip
 * @n: 1st number
 * @m: 2nd number
 * Return: the number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int check = 1;

	while (m || n)
	{
		if ((m & check) != (n & check))
			flips++;
		m >>= 1;
		n >>= 1;
	}
	return (flips);
}
