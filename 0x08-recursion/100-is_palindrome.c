#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * length_of_string - function that finds the length of the
 * @s: input string
 * Return: 0 if null and the lenght otherwise
 */
int length_of_string(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + length_of_string(s + 1));
}

/**
 * check_pal - function that checks if the string is palindrome
 * @i: input integer from is_palindrome function
 * @s: input string
 * @len: lenght of string s
 * Return: 1 if s is a palindrome and 0 otherwise
 */
int check_pal(int i, char *s, int len)
{
	if (*(s + i) != *(s + len - i - 1))
		return (0);
	if (i > len / 2)
		return (1);
	return (check_pal(i + 1, s, len));
}
/**
 * is_palindrome - Entry point
 * @s: input string
 * Return: 1 if a string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int i = 0;

	if (*s == '\0')
		return (1);
	return (check_pal(i, s, length_of_string(s)));
}
