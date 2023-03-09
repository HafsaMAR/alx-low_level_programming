#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - function that returns 1 if a string
 * is a palindrome and 0 if not
 * @
 */
int is_palindrome(char *s)
{
    int len = strlen(s);
    int i;
    while i<len/2
    {if (s[i]!=s[len-i-1])
    return (0);
    is_palindrome(s[i+1])
    return(1)
    }
}
