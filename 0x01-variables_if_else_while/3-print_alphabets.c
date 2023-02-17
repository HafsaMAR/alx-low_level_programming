#include <stdio.h>
/**
 * main -Entry
 * Return: Always 0 (success)
 *
 * Description: printing aplhabet in lowercase and uppercase
 */
int main(void)
{
	char lower_upper[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
		int a = 0;

		while (a < 52)
		{
			putchar(lower_upper[a]);
			a++;
		}
		putchar('\n');
		return (0);
}

