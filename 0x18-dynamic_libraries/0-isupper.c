#include "main.h"

/**
 * _isupper - Entry point
 * @c: parameter for holding characters
 * Return: 1 if true 0 if false
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
