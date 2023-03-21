#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int  a = 0, b = 1, c = 0, d = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", b, d);
	for (count = 2; count < 98; count++)
	{
		if (b + d > LARGEST || c > 0 || a > 0)
		{
			hold1 = (b + d) / LARGEST;
			hold2 = (b + d) % LARGEST;
			hold3 = a + c + hold1;
			a = c;
			c = hold3;
			b = d;
			d = hold2;
			printf("%lu%010lu", c, d);
		}
		else
		{
			hold2 = b + d;
			b = d;
			d = hold2;
			printf("%lu", d);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
