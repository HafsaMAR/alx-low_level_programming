#include <stdio.h>
#include <errno.h>

/**
 * main - prints "and that piece of art is useful" - Dora Kprpar, 2015-10=19",
 * followed by a newline, to standard error.
 * Return: Always 1.
 */
int main(void)
{
	fwrite(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
