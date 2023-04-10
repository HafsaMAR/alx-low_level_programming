#include <fcntl.h>
#include <string.h>
#include <unistd.h>

/**
 * append_text - append a text at the end of a file
 * @filename: pointer to string 'name of file'
 * @text_content: text to print
 * Return: 1 success or -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		len = strlen(text_content);
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
