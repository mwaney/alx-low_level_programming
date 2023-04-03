#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the diagonal sum of 2Darray
 * @a: the pointer to the array
 * @size: the size of the array
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, rdiag, ldiag;

	rdiag = 0;
	ldiag = 0;
	for (i = 0; i < size; i++)
	{
		rdiag += a[(i * size) + i];
		ldiag += a[(i * size) + (size - i - 1)];
	}
	printf("%d, %d\n", rdiag, ldiag);
}
