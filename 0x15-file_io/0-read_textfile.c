#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: path to the file
 * @letters: number of letters it should read and print;
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc;
	char *arr;
	ssize_t count_read, count_write;

	arr = malloc(sizeof(char) * letters);
	if (!arr)
		return (0);
	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
	{
		free(arr);
		return (0);
	}
	count_read = read(file_desc, arr, letters);
	if (count_read == -1)
	{
		free(arr);
		close(file_desc);
		return (0);
	}
	count_write = write(STDOUT_FILENO, arr, count_read);
	if (count_write == -1)
	{
		free(arr);
		close(file_desc);
		return (0);
	}
	close(file_desc);
	free(arr);
	return (count_write);
}
