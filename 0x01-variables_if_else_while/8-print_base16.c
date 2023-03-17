#include <stdio.h>
/**
 * main - Prints numbers using putchar
 *
 * Return: 0 when successfull
 */
int main(void)
{
	char i;

	for (i = '0'; i <='9'; i++)
	{
		putchar(i);
	}
	for (i='a'; i<='f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
