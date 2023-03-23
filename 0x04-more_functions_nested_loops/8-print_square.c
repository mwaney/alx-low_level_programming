#include "main.h"

/**
 * print_square - function to print square
 * @size: parameter to hold size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, j;
	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	i = 0;
	
	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
