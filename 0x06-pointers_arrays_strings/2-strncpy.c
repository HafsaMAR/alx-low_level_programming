#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination string
 * @src: source string
 * @n: byte
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		i++;
	}
	j = 0;
	while (dest[i] != '\0')
	{
		dest[i] = +src[j];
		i++;
		j++;
	}
	return (dest);
}
