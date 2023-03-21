#include "main.h"

/**
 * print_last_digit - function that tests if an alphabet is lowercase
 * @n: The integer to test for
 * Return: last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n *= -1;
	}

	return (n % 10);
}
