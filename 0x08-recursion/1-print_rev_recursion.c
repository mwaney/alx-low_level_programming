#include "main.h"

/**
 * _print_rev_recursion - function that prints in reverse
 * @s: String to be printed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	if (*s != '\n')
		_putchar(*s);
	else
		_putchar('\n');
}
