#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: is a list of types of arguments
 * passed to the function
 * Return: Nothing
 */
void print_all(const char * const format, ...)
{
	va_list argList;
	int i = 0;
	char *string;

	va_start(argList, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argList, int));
				break;
			case 'i':
				printf("%d", va_arg(argList, int));
				break;
			case 'f':
				printf("%f", va_arg(argList, double));
				break;
			case 's':
				string = va_arg(argList, char *);
				if (string)
				{
					printf("%s", string);
					break;
				}
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		}
		if (format[i + 1])
			printf(", ");
		i++;
	}

	printf("\n");
	va_end(argList);
}
