#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements;
 * @size: number of bytes
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)mem)[i] = 0;
	}
	return (mem);

}
