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
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strdup - function that returns a pointer to a
 * newly allocated space in memory, which contains a copy of
 * the string given as a parameter
 * @str: input string
 * Return: copy of the string
 */
char *_strdup(char *str)
{
	int len;
	char *array;
	int i;

	len = len_str(str);
	array = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	if (array == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		array[i] = str[i];
	return (array);
}
