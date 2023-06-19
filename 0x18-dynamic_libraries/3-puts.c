#include "main.h"

/**
 * _puts - prints a sentence with a newline
 * @str: variable pointer
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
