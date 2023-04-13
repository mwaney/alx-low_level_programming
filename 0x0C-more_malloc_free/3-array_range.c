#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers.
 * @min: min value in the array
 * @max: max value in the array
 * Return: Pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *newarr;
	int size, i;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	newarr = malloc(sizeof(int) * size);
	if (newarr == NULL)
		return (NULL);
	for (i = 0; i <= size; i++)
	{
		newarr[i] = min;
		min++;
	}
	return (newarr);
}
