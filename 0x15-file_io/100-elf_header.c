
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *ident);
void magic(unsigned char *ident);
void class(unsigned char *ident);
void data(unsigned char *ident);
void version(unsigned char *ident);
void abi(unsigned char *ident);
void osabi(unsigned char *ident);
void type(unsigned int etype, unsigned char *ident);
void entry(unsigned long int eentry, unsigned char *ident);
void closed(int elf);

/**
 * check_elf - Checks if a file is an ELF file.
 * @ident: A pointer to array.
 */
void check_elf(unsigned char *ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (ident[index] != 127 &&
		    ident[index] != 'E' &&
		    ident[index] != 'L' &&
		    ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * magic - Prints the magic numbers of an ELF header.
 * @ident: A pointer to array.
 */
void magic(unsigned char *ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * class - Prints the class of an ELF header.
 * @ident: A pointer to array.
 */
void class(unsigned char *ident)
{
	printf("  Class:                             ");

	switch (ident[EI_CLASS])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * data - Prints the data of an ELF header.
 * @ident: A pointer to array.
 */
void data(unsigned char *ident)
{
	printf("  Data:                              ");

	switch (ident[EI_DATA])
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
		printf("<unknown: %x>\n", ident[EI_CLASS]);
	}
}

/**
 * version - Prints the version of an ELF header.
 * @ident: A pointer to array.
 */
void version(unsigned char *ident)
{
	printf("  Version:                           %d",
	       ident[EI_VERSION]);

	switch (ident[EI_VERSION])
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
 * osabi - Prints the OS/ABI of an ELF header.
 * @ident: A pointer to array.
 */
void osabi(unsigned char *ident)
{
	printf("  OS/ABI:                            ");

	switch (ident[EI_OSABI])
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
		printf("<unknown: %x>\n", ident[EI_OSABI]);
	}
}

/**
 * abi - Prints the ABI version of an ELF header.
 * @ident: A pointer to array.
 */
void abi(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
	       ident[EI_ABIVERSION]);
}

/**
 * type - Prints the type of an ELF header.
 * @etype: ELF type.
 * @ident: pointer to array.
 */

void type(unsigned int etype, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		etype >>= 8;

	printf("  Type:                              ");

	switch (etype)
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
		printf("<unknown: %x>\n", etype);
	}
}

/**
 * entry - Prints entry point of ELF header.
 * @eentry: The address of ELF entry point.
 * @ident: A pointer to array.
 */
void entry(unsigned long int eentry, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		eentry = ((eentry << 8) & 0xFF00FF00) |
			  ((eentry >> 8) & 0xFF00FF);
		eentry = (eentry << 16) | (eentry >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)eentry);

	else
		printf("%#lx\n", eentry);
}

/**
 * closed - Closes ELF file.
 * @elf: The file descriptor of ELF file.
 */
void closed(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays information contained in ELF
 * header at the start of an ELF file.
 * @argc: number of commandline arguments.
 * @argv: array of pointers to commandline arguments.
 *
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		closed(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		closed(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->ident);
	printf("ELF Header:\n");
	magic(header->ident);
	class(header->ident);
	data(header->ident);
	version(header->ident);
	osabi(header->ident);
	abi(header->ident);
	type(header->etype, header->ident);
	entry(header->eentry, header->ident);

	free(header);
	closed(o);
	return (0);
}
