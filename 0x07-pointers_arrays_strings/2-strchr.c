#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: an array of characters
 * @c: character in search
 * Return: pointer to the first occurrenc of c
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	return (0);
}
