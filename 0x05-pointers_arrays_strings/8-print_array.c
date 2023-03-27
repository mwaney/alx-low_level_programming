#include "main.h"
#include  <stdio.h>

/**
 * print_array - prints values from an array
 * @a: pointer to array
 * @n: variable for the length of the array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
			printf("%d\n", *(a + i));
		else
			printf("%d, ", *(a + i));
	}
}
