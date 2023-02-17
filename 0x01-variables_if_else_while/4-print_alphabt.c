#include <stdio.h>
/**
 * main -Entry
 * Return: always 0 (success)
 *
 * Description: print lowercase alphabet except q and e
 */
int main(void)
{
	char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
	int a = 0;

	while (a < 26)
	{
		if ((Alphabet[a] == 'q') || (Alphabet[a] == 'e'))
		{
			a++;
			continue;
		}
		else
		{
			putchar(Alphabet[a]);
			a++;
		}
	}
	putchar('\n');
	return (0);
}



