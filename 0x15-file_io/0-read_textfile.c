#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - function that reads a text file and print to stdout
 * @filename: the name of the file to be open
 * @letters: number of letter that should be printed
 * Return: the number of letter it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	const char *ptr = filename;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);
	fd = open(ptr, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(size_t) * letters);
	if (buffer == NULL)
	{
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (bytes_written);
}