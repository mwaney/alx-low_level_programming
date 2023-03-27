#include "main.h"

/**
 * puts_half - prints half the characters
 * @str: pointer to string of characters
 * Return: Nothing
 */
void puts_half(char *str)
{
	int length, i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (i = length / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
