#include "main.h"

/**
 * _isalpha - function that tests if a char is an alphabet
 * @c: The character to test for lowercase
 * Return: 1 if character is alphabet and 0 if otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
