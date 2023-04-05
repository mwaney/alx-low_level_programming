#include "main.h"

/**
 * wildcmp - compares two strings and returns 1 if identical 
 * 0 if they are not
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical 0 if not
 */
int helper (char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (helper(s1 + 1, s2 + 1));
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '\0')
			return (1);
		if (helper(s1, s2 + 1) || (*s1 != '\0' && helper(s1 + 1, s2)))
			return (1);
	}
	return (0);
}

int wildcmp(char *s1, char *s2)
{
    return (helper(s1, s2));
}
