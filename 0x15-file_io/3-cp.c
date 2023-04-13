#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 1024

/**
 * main - copies the content of a file to another
 * @argc: counter
 * @argv: string
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int fd_src, fd_dest;
	char buffer[BUF_SIZE];
	ssize_t b_read, b_written;

	if (argc != 3)
		exit(97);
	fd_src = open(argv[1], O_RDONLY);
	if (fd_src == -1)
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_dest == -1)
	{
		printf("Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (b_read = read(fd_src, buffer, BUF_SIZE) > 0)
	{
		b_written = write(fd_dest, buffer, b_read);
		if (b_written != b_read)
		{
			printf("Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (close(fd_src) == -1)
	{
		printf("Error: Can't close fd %d\n", fd_src);
		exit(100);
	}
	if (close(fd_dest) == -1)
	{
		printf("Error: Can't close fd %d\n", fd_dest);
		exit(100);
	}
	return (0);
}
