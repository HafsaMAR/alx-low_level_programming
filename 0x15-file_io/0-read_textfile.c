#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * read_textfile - reads a text file and print it to STDO
 * @filename: pointer to const which is name of file
 * @letters: number of letters to print
 * Return: number of letter printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t i = 0;

	buffer = malloc(letters * sizeof(size_t));
	if (buffer == NULL)
		return (0);
	fp = fopen(filename, "r");
	if (fp == NULL || letters == 0)
	{
		return (0);
	}
	while (fgets(buffer, letters, fp))
	{
		printf("%s", buffer);
		i++;
	}
	fclose(fp);
	return (i);
}
