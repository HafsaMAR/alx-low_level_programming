#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * read_elfheader - read the elf file
 * @fd: file descriptor
 * @h: header file
 * Return : void
 */

void read_elfheader(int fd, Elf64_Ehdr *h)
{
	if (read(fd, h, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		perror("Error: read");
		exit(98);
	}
}

/**
 * check_file - checks if the file is an elf header file
 * @h : header file
 * Return : void
 */

void check_file(Elf64_Ehdr *h)
{
	if (h->e_ident[EI_MAG0] != ELFMAG0 ||
	h->e_ident[EI_MAG1] != ELFMAG1 ||
	h->e_ident[EI_MAG2] != ELFMAG2 ||
	h->e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: not an ELF file\n");
		exit(98);
	}
}

/**
 * display_info - prints the info of the header file to stdout
 * @h: elf header file
 * Return : void
 */

void display_info(Elf64_Ehdr *h)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", h->e_ident[i]);
	}
	printf("\nClass:                             ");
	printf("%s\n", h->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              ");
	printf("%s\n", h->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           ");
	printf("%u\n", h->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	printf("%u\n", h->e_ident[EI_OSABI]);
	printf("ABI Version:                       ");
	printf("%u\n", h->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	printf("%u\n", h->e_type);
	printf("Entry point address:               ");
	printf("%#010x\n", (unsigned int)h->e_entry);
}

/**
 * main - entry point
 * @ac: number of arguments
 * @av: pointer to string
 * Return: 0 on success or 98 otherwise
 */

int main(int ac, char *av[])
{
	Elf64_Ehdr header;
	int fd;

	if (ac != 2)
	{
		fprintf(stderr, "Usage: elf_header elf_filename\n");
		return (98);
	}
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
	{
		perror("open");
		return (98);
	}
	read_elfheader(fd, &header);
	check_file(&header);
	display_info(&header);
	close(fd);
	return (0);
}
