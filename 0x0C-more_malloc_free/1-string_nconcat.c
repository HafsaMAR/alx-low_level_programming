#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len_str - function that determines the lengh of a string
 * @str: input string
 * Return: lenght of string
 */
int len_str(char *str)
{
	unsigned int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * string_nconcat - function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: pointer of s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *array;
	unsigned int len, i, j;
	unsigned int N = n;

	len = len_str(s1);
	array = malloc(len + N + 1);
	for (i = 0; i <= len; i++)
		array[i] = s1[i];
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (s1 == NULL)
		s1 = "";
	if (!array)
	{
		return (NULL);
	}
	else
	{
		j = 0;
		while (j < N)
		{
			array[i] = +s2[j];
			i++;
			j++;
		}
	}
	return (array);
}
