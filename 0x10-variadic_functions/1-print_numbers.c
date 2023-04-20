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

	va_start(argList, n);
	for (i = 0; i < n; i++)
	{
		if (separator)
			printf("%d%s ", va_arg(argList, int), separator);
		else if ((i == (n - 1)) || !separator)
			printf("%d ", va_arg(argList, int));
	}
	printf("\n");

	va_end(argList);
}
