#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * create_file -  function that create a file
 * @filename: name of the file to create
 * @text_content: text
 * Return: 1 success or -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t written_bytes;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	len = strlen(text_content);
	written_bytes = write(fd, text_content, len);
	if (written_bytes == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
