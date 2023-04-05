#include "main.h"

/**
 * is_prime_helper - helper function
 * @n: number to check against
 * @i: counter and number to check divisibility
 * Return: 0 or 1
 */

int is_prime_helper(int n, int i)
{
	if (n < 2 || n % 2 == 0)
		return (0);
	if (n == 2 || n == 3)
		return (1);
	if (n % i == 0)
	{
		return (0);
	}
	if (i * i > n)
		return (1);
	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - function to check if number is prime
 * @n: integer number which is our argument
 * Return: 1 if number is prime 0 if its not
 */
int is_prime_number(int n)
{
		return (is_prime_helper(n, 3));

}
