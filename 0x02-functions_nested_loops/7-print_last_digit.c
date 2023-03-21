#include "main.h"

/**
 * print_last_digit - function that tests if an alphabet is lowercase
 * @n: The integer to test for
 * Return: last digit
 */
int print_last_digit(int n)
{
	int p;

	if (n < 0)
		n = -n;
	p =  n % 10;
	_putchar(p + '0');
	return (p);
}
