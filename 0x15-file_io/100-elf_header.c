#include <elf.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

void is_elf(unsigned char *e_ident);
void print_magic(unsigned char *magic_bytes);
void print_elf_class(unsigned char *ident);
void print_elf_data(unsigned char *ident);
void print_elf_version(unsigned char *ident);
void print_elf_abi(unsigned char *ident);
void print_elf_osabi(unsigned char *e_ident);
void print_elf_type(unsigned int type, unsigned char *ident);
void print_entry(unsigned long int entry_point, unsigned char *ident);
void close_file(int fd);

/**
 * is_elf - function to check if file is ELF or not
 * @e_ident: A pointer to an array containing the ELF magic numbers.
 * Description: If the file is not an ELF file - exit code 98.
 * Return: Nothing
 */
void is_elf(unsigned char *e_ident)
{
	int i;

	for (i = 0; i <= 3; i++)
	{
		if (e_ident[i] != 127 &&
				e_ident[i] != 'E' &&
				e_ident[i] != 'L' &&
				e_ident[i] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic - Prints the magic numbers of an ELF head_ptr.
 * @magic_bytes: A pointer to an array containing the ELF magic numbers.
 * Description: Magic numbers are separated by spaces.
 * Return: Nothing
 */
void print_magic(unsigned char *magic_bytes)
{
	int i;

	printf("  Magic:   ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", magic_bytes[i]);

		if (i == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_elf_class - function that prints class of an ELF head_ptr.
 * ident: A pointer to an array containing the ELF class.
 * Return: Nothing
 */
void print_elf_class(unsigned char *ident)
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
			break;
	}
}


/**
 * print_data - Prints the data of an ELF head_ptr.
 * @ident: A pointer to an array containing the ELF class.
 * Return: Nothing
 */
void print_elf_data(unsigned char *ident)
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
 * print_elf_version - Prints the version of an ELF head_ptr.
 * @ident: A pointer to an array containing the ELF version.
 */
void print_elf_version(unsigned char *ident)
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
 * print_elf_osabi - function that prints the OS/ABI of an ELF head_ptr.
 * @ident: points to an array containing the ELF version.
 */
void print_elf_osabi(unsigned char *ident)
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
 * print_elf_abi - function that prints the ABI version of an ELF head_ptr.
 * @ident: points to an array containing the ELF ABI version.
 * Return: Nothing
 */
void print_elf_abi(unsigned char *ident)
{
	printf("  ABI Version:                       %d\n",
			ident[EI_ABIVERSION]);
}

/**
 * print_elf_type - Prints the type of an ELF head_ptr.
 * @type: The ELF type.
 * @ident: points to an array containing the ELF class.
 * Return: Nothing
 */
void print_elf_type(unsigned int type, unsigned char *ident)
{
	if (ident[EI_DATA] == ELFDATA2MSB)
		type >>= 8;

	printf("  Type:                              ");

	switch (type)
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
			printf("<unknown: %x>\n", type);
	}
}


/**
 * print_entry - Prints the entry point of an ELF head_ptr.
 * @entry_point: The address of the ELF entry point.
 * @ident: A pointer to an array containing the ELF class.
 * Return: Nothing
 */
void print_entry(unsigned long int entry_point, unsigned char *ident)
{
	printf("  Entry point address:               ");

	if (ident[EI_DATA] == ELFDATA2MSB)
	{
		entry_point = ((entry_point << 8) & 0xFF00FF00) |
			((entry_point >> 8) & 0xFF00FF);
		entry_point = (entry_point << 16) | (entry_point >> 16);
	}

	if (ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_point);
	else
		printf("%#lx\n", entry_point);
}


/**
 * close_file - Closes a file.
 * @fd: The file descriptor of the file.
 * Description: If the file cannot be closed - exit code 98.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(98);
	}
}

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *head_ptr;
	int file_descriptor, bytes_read;

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	head_ptr = malloc(sizeof(Elf64_Ehdr));
	if (head_ptr == NULL)
	{
		close_file(file_descriptor);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	bytes_read = read(file_descriptor, head_ptr, sizeof(Elf64_Ehdr));
	if (bytes_read == -1)
	{
		free(head_ptr);
		close_file(file_descriptor);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	is_elf(head_ptr->e_ident);
	printf("ELF Header:\n");
	print_magic(head_ptr->e_ident);
	print_elf_class(head_ptr->e_ident);
	print_elf_data(head_ptr->e_ident);
	print_elf_version(head_ptr->e_ident);
	print_elf_osabi(head_ptr->e_ident);
	print_elf_abi(head_ptr->e_ident);
	print_elf_type(head_ptr->e_type, head_ptr->e_ident);
	print_entry(head_ptr->e_entry, head_ptr->e_ident);

	free(head_ptr);
	close_file(file_descriptor);
	return (0);
}
