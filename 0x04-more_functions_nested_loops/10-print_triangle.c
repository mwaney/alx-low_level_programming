#include "main.h"

/**
 * print_triangle - function to print triangles
 * @size: parameter to indicate size of triangle
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, space;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (space = 1; space <= size - i; space++)
		{
			_putchar(' ');
		}
		for (space = 1; space <= i; space++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
