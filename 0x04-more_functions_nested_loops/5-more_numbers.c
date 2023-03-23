#include "main.h"

/**
 * more_numbers - prints multiple lines of 1 upto 14
 *
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, j;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j + '0');
		}
		_putchar('\n');
	}
}

