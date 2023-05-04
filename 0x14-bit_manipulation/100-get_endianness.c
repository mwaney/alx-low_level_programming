#include "main.h"

/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian 1 if little
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *res = (char *)&num;

	if (*res == 1)
		return (1);
	else
		return (0);
}
