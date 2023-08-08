#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>


void elf_check(unsigned char *e_ident);
void magic_print(unsigned char *e_ident);
void class_print(unsigned char *e_ident);
void data_print(unsigned char *e_ident);
void version_print(unsigned char *e_ident);
void abi_print(unsigned char *e_ident);
void osabi_print(unsigned char *e_ident);
void type_print(unsigned int e_type, unsigned char *e_ident);
void entry_print(unsigned long int e_entry, unsigned char *e_ident);
void elf_close(int elf);

/**
 * elf_check - checks if a file is an ELF file
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void elf_check(unsigned char *e_ident)
{
	int check;

	for (check = 0; check < 4; check++)
	{
		if (e_ident[check] != 127 &&
		    e_ident[check] != 'E' &&
		    e_ident[check] != 'L' &&
		    e_ident[check] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic_print - prints the magic numbers of an ELF header
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void magic_print(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class_print - prints the class of an ELF header
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void class_print(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data_print - prints the data of an ELF header
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void data_print(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * version_print - prints the version of an ELF header
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void version_print(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * osabi_print - prints the OS/ABI of an ELF header
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void osabi_print(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi_print - prints the ABI version of an ELF header
 *
 * @e_ident: pointer to an array of ELF magic numbers
 */
void abi_print(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * type_print - prints the type of an ELF header
 *
 * @e_type: ELF type
 * @e_ident: pointer to an array of ELF magic numbers
 */
void type_print(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * entry_print - prints the entry point of an ELF header
 *
 * @e_entry: address of the ELF entry point
 * @e_ident: pointer to an array of ELF magic numbers
 */
void entry_print(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
		printf("%#lx\n", e_entry);
}

/**
 * elf_close - closes an ELF file
 *
 * @elf: file descriptor of the ELF file
 */
void elf_close(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes_read;
	Elf64_Ehdr *header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <elf_filename>\n", argv[0]);
		exit(1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Cannot open file %s\n", argv[1]);
		exit(1);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		fprintf(stderr, "Error: Failed to allocate memory\n");
		exit(1);
	}
	bytes_read = read(fd, header, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
	{
		free(header);
		fprintf(stderr, "Error: Failed to read ELF header\n");
		exit(1);
	}
	elf_check(header->e_ident);
	printf("ELF Header:\n");
	magic_print(header->e_ident);
	class_print(header->e_ident);
	data_print(header->e_ident);
	version_print(header->e_ident);
	osabi_print(header->e_ident);
	abi_print(header->e_ident);
	type_print(header->e_type, header->e_ident);
	entry_print(header->e_entry, header->e_ident);
	free(header);
	if (close(fd) == -1)
	{
		fprintf(stderr, "Error: Failed to close file\n");
		exit(1);
	}
	return (0);
}
