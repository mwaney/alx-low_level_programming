#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers,
 * followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argList;
	unsigned int i;

	if (!n)
		return;
	va_start(argList, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(argList, int));
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argList);
}
