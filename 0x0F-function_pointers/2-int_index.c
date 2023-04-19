#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array that contains elements to get the index from
 * @size: number og elements in the array
 * @cmp: a pointer to the function to be used to compare values
 * Return: index of the firtst element for which cmp function does
 * not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp || size < 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
