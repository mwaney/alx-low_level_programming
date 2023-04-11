#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional
 * array of integers.
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to a 2D array
 */
int **alloc_grid(int width, int height)
{
	int **pp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	pp = malloc(sizeof(int *) * height);
	if (pp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		pp[i] = malloc(sizeof(int) * width);
		if (pp[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(pp[j]);
			}
			free(pp);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			pp[i][j] = 0;
	}
	return (pp);
}
