#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian or 1 otherwise
 */

int get_endianness(void)
{
	int check = 0x0001;
	char *word = (char *)&check;

	return (word[0] ? 1 : 0);
}
