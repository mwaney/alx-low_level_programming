#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: first string
 * @accept: second string
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned char *i = (unsigned char *) s;
	unsigned char *j;
	unsigned int len = 0;

	while (*i)
	{
		j = (unsigned char *) accept;
		while (*j)
		{
			if (*i == *j)
				break;
			j++;
		}
		if (*j == '\0')
			return (len);
		i++;
		len += 1;
	}
	return (len);
}
