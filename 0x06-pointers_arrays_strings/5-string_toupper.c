#include "main.h"
/**
 * string_toupper - Convert all lowercase letters in a string to uppercase.
 *
 * @str: Pointer to the string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *string_toupper(char *str)
{
	char *ptr;

	ptr = str;
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - 32;
		}
		ptr++;
	}
	return (str);
}
