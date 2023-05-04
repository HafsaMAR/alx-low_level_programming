#include "main.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: pointer to number
 * @index: index
 * Return: 1 success or -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int mask = 1LU << index;

        if (!n || index > sizeof(unsigned long int) * 8 - 1)
                return (-1);
        *n &= ~mask;
        return (1);
}
