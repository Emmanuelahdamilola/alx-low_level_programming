#include "main.h"
#include <string.h>

/**
 * print_elf_header - Function that prints the ELF header file
 * @header: The struct that represents the ELF header
 *
 * Return: void
 */
void print_elf_header(const ElfHeader *header)
{
	int i = 0;

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (; i < 16; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:                             ELF%d\n", header->e_ident[4] == 1 ? 32 : 64);
	printf("  Data:                              ");
	switch (header->e_ident[5])
	{
		case 1:
			printf("2's complement, little endian\n");
			break;
		case 2:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  Version:                           %d (current)\n", header->e_ident[6]);
	printf("  OS/ABI:                            ");
	switch (header->e_ident[7])
	{
		case 0:
			printf("UNIX - System V\n");
			break;
		case 6:
			printf("UNIX - Solaris\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  ABI Version:                       %d\n", header->e_ident[8]);
	printf("  Type:                              ");
	switch (header->e_type)
	{
		case 0:
			printf("No file type\n");
			break;
		case 1:
			printf("REL (Relocatable file)\n");
			break;
		case 2:
			printf("EXEC (Executable file)\n");
			break;
		case 3:
			printf("DYN (Shared object file)\n");
		       	break;
		case 4:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("  Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
       	const char *file_name;
	int file_des;
	ElfHeader header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	file_name = argv[1];
	file_des = open(file_name, O_RDONLY);
	if (file_des == -1)
	{
		perror("Error opening file");
		return (98);
	}

	if (read(file_des, &header, sizeof(ElfHeader)) != sizeof(ElfHeader))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(file_des);
		return (98);
	}

	if (memcmp(header.e_ident, ELF_MAGIC, sizeof(ELF_MAGIC) - 1) != 0)
	{
		fprintf(stderr, "File is not an ELF file\n");
		close(file_des);
		return (98);
	}
	print_elf_header(&header);

	close(file_des);
	return (0);
}

