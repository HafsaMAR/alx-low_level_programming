#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * le
 */
int lenth_of_string(char *s)
{
	int len = 0;

	if (*s)
	{
		len = 1 + lenth_of_string(s + 1);
	}
}

/**
 *
 */
int check_pal(int i, char *s, int len)
{
	i = 0;
	if (*(s + i) != *(s + len - i - 1))
		return (0);
	if (i > len / 2)
		return (1);
	return (check_pal(i + 1, s, len));
}
/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (check_pal(i, s, lenth_of_string(s));
}
