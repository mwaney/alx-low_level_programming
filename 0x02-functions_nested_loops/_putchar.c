#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to output
 *
 * Return: Always 1 (Success
 * On error return -1)
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
