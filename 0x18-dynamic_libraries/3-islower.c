#include "main.h"
#include "stdio.h"
/**
 * _islower - Entry
 * Description: checks for lowercase characters
 * @c: character to check
 * Return: 1 if uppercase, 0 if lowercase
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
