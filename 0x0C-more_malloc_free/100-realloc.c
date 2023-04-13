#include <stdlib.h>
#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr:  pointer to the memory previously allocated
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 * Return: pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newptr, *oldptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	newptr = malloc(new_size);
	if (newptr == NULL)
		return (NULL);
	oldptr = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			newptr[i] = oldptr[i];
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			newptr[i] = oldptr[i];
	}
	free(ptr);
	return (newptr);

}
