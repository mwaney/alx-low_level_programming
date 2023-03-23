#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

	if (n <= 0)
		_putchar('\n');
	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
