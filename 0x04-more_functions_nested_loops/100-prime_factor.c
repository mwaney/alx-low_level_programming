#include <stdio.h>

/**
 * main - program to find the greatest prime factor
 *
 * Return: 0 Always
 */

int main(void)
{
	unsigned long int num, i, largest;

	num = 612852475143;
	largest = 0;

	for (i = 2; i <= num; i++)
	{
		while (num % i == 0)
		{
			if (i > largest)
			{
				largest = i;
			}
			num /= i;
		}
	}
	return (0);
}
