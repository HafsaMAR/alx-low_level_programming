#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024

void print_error(char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}

int main(int argc, char *argv[])
{
	int close_from, close_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_written, bytes_read, total_bytes_copied = 0;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		print_error("Can't read from file");
		print_error(argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		print_error("Can't write to file");
		print_error(argv[2]);
		exit(99);
	}

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		total_bytes_copied += bytes_read;
		if (total_bytes_copied >= BUFFER_SIZE)
		{
			break;
		}
		if (bytes_written != bytes_read)
		{
			print_error("Can't write to file");
			print_error(argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		print_error("Can't read from file");
		print_error(argv[1]);
		exit(98);
	}
	close_from = close(fd_from);
	if (close_from == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_from);
		exit(100);
	}
	close_to = close(fd_to);
	if (close_to == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_to);
		exit(100);
	}
	return 0;
}
