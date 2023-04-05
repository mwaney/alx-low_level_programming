#include "main.h"

/**
 * helper - function that checks if string is palindrome
 * @s: the string
 * @beg: points to the begining of string
 * @end: points to the end
 * Return: 1 if palindrome 0 if not
 */

int helper(char *s, int beg, int end)
{
	if (beg >= end)
		return (1);
	if (s[beg] == s[end])
		return (helper(s, beg + 1, end - 1));
	return (0);
}

/**
 * _strlen - outputs the length of a string
 * @s: the string itself
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}
/**
 * is_palindrome- -function to check if string is palindrome
 * @s: the string
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	if (!s)
		return (1);
	len = _strlen(s);
	return (helper(s, 0, len - 1));
}
