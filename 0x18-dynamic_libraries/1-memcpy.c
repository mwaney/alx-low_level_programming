#include "main.h"

/**
 * _memcpy - function copies n bytes from memory aread to dest
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = (unsigned char *) dest;

	for (i = 0; i < n; i++)
	{
		destination[i] = src[i];
	}
	return (dest);
}
