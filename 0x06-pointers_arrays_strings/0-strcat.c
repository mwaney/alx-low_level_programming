#include "main.h"

/**
 * _strcat - function that concatenates 2 strings
 * @dest: pointer to destination string
 * @src: pointer to source
 * Return: an array of characters
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while (*result != '\0')
		result++;
	while (*src != '\0')
	{
		*result++ = *src++;
	}
	*result = '\0';
	return (dest);
}
