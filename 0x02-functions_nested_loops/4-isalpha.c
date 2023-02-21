#include "main.h"
/**
 * _isalpha() - check for alphabctic characters
 * @c: single letter input
 * Description: checks uppercase and lowercase letters
 * Return: 1 if c is an uppercase or lowercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
