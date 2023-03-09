#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	char c;

	c = puts (_print_rev_recursion(s))
	if (*s == c)
		return (1);
	else
		return (0);
	return (is_palindrome(s+1));
}
