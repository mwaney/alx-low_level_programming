#include "main.h"

/**
 * _memset - function that fills the first n bytes of the memory area
 * @s: memeory area
 * @b: constant byte
 * @n: size of memory
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned char j = b;
	unsigned char *k = (unsigned char *) s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		k[i] = j;
	}
	return (s);
}
