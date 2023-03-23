#include "main.h"

/**
 * positive_or_negative - tests if a number is positvie or negative
 * description - Checks for positive numbers
 * @i: this is a parameter
 * Return: nothing
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is Zero\n", i);
}
