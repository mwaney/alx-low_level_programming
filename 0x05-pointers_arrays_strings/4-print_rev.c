#include "main.h"

/**
 * print_rev - prints a sentence in reverse
 * @s: pointer to the string
 * Return: Nothing
 */
void print_rev(char *s)
{
	char *rev;

	rev = s;
	while (*rev != '\0')
	{
		rev++;
	}
	rev--;
	while (rev >= s)
	{
		_putchar(*rev);
		rev--;
	}
	_putchar('\n');
}
