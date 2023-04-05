#include "main.h"

/**
 * helper - function that checks probability of a square root
 * @n: number to get the square root from
 * @ans: The answer which is our root
 * Return: the square root
 */

int helper(int n, int ans)
{
	if ((ans * ans) == n)
		return (ans);
	if (ans == n / 2)
		return (-1);
	return (helper(n, ans + 1));
}

/**
 * _sqrt_recursion - function that gives a square root
 * @n: number to get the square root from
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	int ans = 0;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (helper(n, ans));
}
