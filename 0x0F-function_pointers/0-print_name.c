#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - funtions that prints a name
 * @name: pointer to name
 * @f: pointer to function
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
