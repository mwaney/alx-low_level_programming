#include "main.h"

/**
 * print_number - function to print numbers
 * @n: the number to be printed
 * Return: Nothing
 */
void print_number(int n)
{
	unsigned int  i = n;

	if (n < 0)
	{
		n = -n;
		i = n;
		_putchar('-');
	}
	i /= 10;
	if (i != 0)
		print_number(i);
	_putchar((unsigned int) n % 10 + '0');
}
