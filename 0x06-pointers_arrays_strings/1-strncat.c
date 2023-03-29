#include "main.h"

/**
 * _strncat - function to concatenate 2 strings with a limit
 * @dest: destination pointer
 * @src: source pointer
 * @n: limit of characters to add to first string
 * Reurn: an array of characters
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;

	result = dest;
	while (*result != '\0')
		result++;
	while (*src != '\0' && n-- > 0)
	{
		*result++ = *src++;
	}
	*result = '\0';
	return (dest);
}
