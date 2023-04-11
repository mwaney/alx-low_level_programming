#include "main.h"
#include <stdlib.h>

/**
 * create_array-  function that creates an array of chars
 * @size: first parameter
 * @c: character to initialize with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL || size <= 0)
		return (NULL);
	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}
	return (arr);
}
