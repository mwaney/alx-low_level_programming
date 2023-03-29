#include "main.h"

/**
 * _strncpy - function to copy
 * @dest: variable to destination string
 * @src: variable to source
 * @n: number of characters
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
