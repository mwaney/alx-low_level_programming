#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints the nth times table
 * @n: int value of the the n table
 * Return: void
 */
void print_times_table(int n)
{
	int a = 0, b, c;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (c > 99)
			{
				putchar(c / 100 + '0');
				putchar((c / 10 % 10) + '0');
				putchar(c % 10 + '0');
			}
			else if (c > 9)
			{
				putchar(' ');
				putchar(c / 10 + '0');
				putchar(c % 10 + '0');
			}
			else if (b != 0)
			{
				putchar(' ');
				putchar(' ');
				putchar(c + '0');
			}
			else
				putchar(c + '0');

			if (b != n)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		a++;
	}
}
