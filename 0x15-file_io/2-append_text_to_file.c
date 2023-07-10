#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - append text at the end of the file
 * @filename: name of the file
 * @text_content: text
 * Return: 1 success , -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		goto finish;
	len = strlen(text_content);
	byte_written = write(fd, text_content, len);
	if (byte_written == -1)
	{
		close(fd);
		return (-1);
	}
finish: close(fd);
	return (1);
}