#include <stddef.h>
#include <unistd.h>
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
	int fd, read_bytes, written_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(letters * sizeof(char));
	if (!buffer)
		return (0);
	read_bytes = read(fd, buffer, letters);
	if (read_bytes == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	written_bytes = write(STDOUT_FILENO, buffer, read_bytes);
	if (written_bytes == -1 || read_bytes != written_bytes)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (written_bytes);
}
