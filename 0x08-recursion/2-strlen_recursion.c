#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input string
 * Return: 0 sucess
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len = 1 + _strlen_recursion(s + 1);
	}
	return (len);
}
