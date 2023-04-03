#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * @s: First string
 * @accept: second string
 * Return: a pointer to byte s
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned char *comp = (unsigned char *) s;
	unsigned char *str2;
	unsigned int i = 0, j;

	while (comp[i] != '\0')
	{
		j = 0;
		str2 = (unsigned char *) accept;
		while (str2[j] != '\0')
		{
			if (comp[i] != str2[j])
			{
				j++;
			}
			else
			{
				return (s + i);
			}
		}
		i++;
	}
	return ('\0');
}
