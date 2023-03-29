#include "main.h"

/**
 * reverse_array - Function to reverse  items in an array
 * @a: the array
 * @n: number of elements in the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j, temp;

	i = 0;
	j = n - 1;
	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}

}
