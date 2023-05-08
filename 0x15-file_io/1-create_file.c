#include "main.h"

/**
 * create_file - creates a file with the specified
 * filename and writes the provided text to it.
 * @filename: a pointer to the name of the file to create.
 * @text_content: a pointer to the text to write to the file.
 * Return: 1 success, -1 Fail
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc, words, count = 0;

	if (filename == NULL)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[count] != '\0')
			count++;
		words = write(file_desc, text_content, count);
		if (words == -1)
		{
			close(file_desc);
			return (-1);
		}
	}
	close(file_desc);
	return (1);
}
