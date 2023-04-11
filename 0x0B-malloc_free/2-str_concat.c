#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: Pointer to the concatenated string or Null
 */
char *str_concat(char *s1, char *s2)
{
	char *p;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	p = (char *) malloc(strlen(s1) + strlen(s2) + 1);
	if (p == NULL)
		return (NULL);
	strcpy(p, s2);
	strcat(p, " ");
	strcat(p, s1);
	return (p);
}
