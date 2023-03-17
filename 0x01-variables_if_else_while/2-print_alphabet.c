#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints all lowercase letters using a for loop and putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

