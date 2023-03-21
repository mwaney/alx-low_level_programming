#include "main.h"

/**
 * print_alphabet_x10 - prints ten lines of alphbets
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
