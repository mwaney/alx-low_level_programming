#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments passed to the program
 * @argv: array of arguments passed to the program
 * Return: 0 on success, otherwise 97, 98, 99 or 100
 */

int main(int argc, char *argv[])
{
	int src, dest, rc, wc;
	char words[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	src = open(argv[1], O_RDONLY);
	if (src == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]), exit(98);
	dest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	do {
		rc = read(src, words, 1024);
		if (rc == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
					argv[1]), exit(98);
		wc = write(dest, words, rc);
		if (wc == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	} while (rc == 1024);
	if (close(src) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src), exit(100);
	if (close(dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest), exit(100);
	return (0);
}
