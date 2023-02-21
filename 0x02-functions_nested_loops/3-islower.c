#include "main.h"
#include "stdio.h"
/**
 * _islower() - chacks for lowercase character
 * @c: character to check
 * Description: returns 1 if lowercase and 0 otherwise
 * Return: integer
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
