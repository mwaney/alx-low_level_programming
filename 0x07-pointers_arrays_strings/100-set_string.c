#include "main.h"

/**
 * set_string - function that sets value of a pointer to char
 * @s: pointer to a pointer
 * @to: another pointer
 * Return: Nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
