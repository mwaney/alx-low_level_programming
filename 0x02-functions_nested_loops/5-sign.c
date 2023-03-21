#include "main.h"

/**
 * print_sign - function that tests if an alphabet is lowercase
 * @n: The integer to test for
 * Return: 1 if character is lowercase and 0 if otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
