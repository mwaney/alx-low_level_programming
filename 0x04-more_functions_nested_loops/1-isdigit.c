#include "main.h"

/**
 * _isdigit - check the code
 * @c: parameter for function
 * Return: 1 if true 0 if false.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
