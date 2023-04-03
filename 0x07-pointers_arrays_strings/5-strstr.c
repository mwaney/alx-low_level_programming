#include "main.h"

/**
 * _strstr - function to find substring
 * @haystack: String to search through
 * @needle: what to search for
 * Return: pointer to beggining of substring
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned char *h = (unsigned char *) haystack;
	unsigned char *n = (unsigned char *) needle;
	char *start;

	while (*h)
	{
		start = haystack;
		while (*n && *n == *h)
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (start);
		h = (unsigned char *) ++haystack;
		n = (unsigned char *) needle;
	}
	return ('\0');

}
