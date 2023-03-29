#include "main.h"

/**
 * _strncat - function to concatenate 2 strings with a limit
 * @dest: destination pointer
 * @src: source pointer
 * @n: limit of characters to add to first string
 * Return: an array of characters
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, int j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j;
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
