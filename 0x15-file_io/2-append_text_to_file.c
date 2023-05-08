#include "main.h"

/**
 * append_text_to_file - appends text to the end of a file
 * @filename: a pointer to the name of the file to create.
 * @text_content: a pointer to the text to write to the file.
 * Return: 1 success, -1 Fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc, count = 0, words;

	if (!filename)
		return (-1);
	file_desc = open(filename, O_WRONLY | O_APPEND);
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
