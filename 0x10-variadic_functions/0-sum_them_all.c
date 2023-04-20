#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns
 * the sum of all its parameters
 * @n: number of arguments passed in the function
 * Return: Sum or 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argCount;
	int sum = 0, num;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(argCount, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(argCount, int);
		sum += num;
	}

	va_end(argCount);
	return (sum);
}
