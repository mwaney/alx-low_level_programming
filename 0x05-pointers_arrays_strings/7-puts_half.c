#include "main.h"

/**
 * puts_half - prints half the characters
 * @str: pointer to string of characters
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length, i, len;

	length = 0;
	len = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	if (length % 2 != 0)
		len = (length - 1) / 2;
	else
		len = length / 2;
	for (i = len; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
