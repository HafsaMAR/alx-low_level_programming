#include "main.h"

/**
 * _strncat - unction that concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: byte from scr string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j]!=0)
	{
		dest[i] = +src[j];
		i++;
		j++;
	}
	return (dest);
}
