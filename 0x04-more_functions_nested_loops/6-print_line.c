#include "main.h"

/**
 * print_line - function that prints a line of different length
 * @n: length of line
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
