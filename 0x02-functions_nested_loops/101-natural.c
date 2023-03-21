#include <stdio.h>

/**
 * main - Entry point
 * Description: prints all natural numbers divisible by 3 and 5 under 1024
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;
	int b = 1;

	while (b < 1024)
	{
		if ((b % 3) == 0)
			a += b;
		else if ((b % 5) == 0)
			a += b;

		b++;
	}
	printf("%d\n", a);

	return (0);
}
