#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int getChange(int change);

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success 1 Error
 */
int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	printf("%d\n", getChange(cents));
	return (0);
}
/**
 * getChange - prints the minimum number of coins to make
 * change for an amount of money.
 * @change: total amount
 * Return: 0 Success or solution
 */
int getChange(int change)
{
	int solution = 0;

	if (change < 0)
	{
		return (0);
	}

	while (change > 0)
	{
		if (change >= 25)
		{
			change -= 25;
			solution += 1;
		}
		else if (change >= 10)
		{
			change -= 10;
			solution += 1;
		}
		else if (change >= 5)
		{
			change -= 5;
			solution += 1;
		}
		else if (change >= 2)
		{
			change -= 2;
			solution += 1;
		}
		else
		{
			change -= 1;
			solution += 1;
		}
	}
	return (solution);
}
