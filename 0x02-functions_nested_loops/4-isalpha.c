#include "main.h"
/**
 * _isalpha() - a function that checks for alphabctic characters
 * Description: checks uppercase and lowercase letters
 * Return: 1 if c is an uppercase or lowercase letter, 0 otherwise
 * @c: single letter input
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
