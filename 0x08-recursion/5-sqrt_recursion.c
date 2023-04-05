#include "main.h"

/**
 * helper - function that checks probability of a square root
 * @n: number to get the square root from
 * @s: start pointer
 * @e: end pointer
 * Return: the square root
 */

int helper(int n, int s, int e)
{
	int m = (s + e) / 2;
	int square = m * m;

	if (s > e)
		return (s - 1);

	if (square == n)
		return (m);
	else if (square < n)
		return (helper(n, m+1, e));
	else
		return (helper(n, s, m - 1));
}

/**
 * _sqrt_recursion - function that gives a square root
 * @n: number to get the square root from
 * Return: the square root
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (helper(n, 1, (n / 2) + 1));
}
