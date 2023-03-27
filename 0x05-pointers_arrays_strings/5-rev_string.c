#include "main.h"

/**
 * rev_string- reverses a string
 * @s: a pointer to  a string array
 * Return: Nothing
 */
void rev_string(char *s)
{
	int length, i;
	char *rev, temp;

	length = 0;
	rev = s;
	while (*rev != '\0')
	{
		length++;
		rev++;
	}
	rev--;
	for (i = 0; i < length / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(rev - i);
		*(rev - i) = temp;
	}
}
