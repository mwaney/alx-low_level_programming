#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list argList;
	char *string;

	va_start(argList, n);
	for (i = 0; i < n; i++)
	{
		string = va_arg(argList, char *);
		string ? printf("%s", string) : printf("(nil)");
		if (i < (n - 1) && separator)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argList);
}
