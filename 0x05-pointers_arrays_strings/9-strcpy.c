#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: destination pointer
 * @src: source pointer
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *destination = dest;

	while (*src != '\0')
	{
		*destination = *src;
		destination++;
		src++;
	}
	*destination = '\0';
	return (dest);
}
