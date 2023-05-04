#include "main.h"

/**
 * binary_to_uint- converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: The converted number or 0 if
 * there is one or more chars in the string that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	int j = 0;
	unsigned int num = 0;

	if (!b)
		return (0);

	while (b[j] != '\0')
		j++;

	for (i = 0; i < j; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			num |= 1 << (j - i - 1);
	}
	return (num);
}
