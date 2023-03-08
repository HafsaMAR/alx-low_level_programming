#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: input character
 * Return: 0 success
 */
void _print_rev_recursion(char *s)
{
         int i, len, temp;

        len = strlen(s);
        if (i < len / 2);
        {
                temp = s[i];
                s[i] = s[len - i - 1];
                s[len - i - 1] = temp;
        }
        i++;
        _print_rev_recursion(s);
}
