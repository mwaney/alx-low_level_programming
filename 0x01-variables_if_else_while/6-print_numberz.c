#include <stdio.h>
/**
 * main - Prints numbers using putchar
 *
 * Return: 0 when successfull
 */
int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
