#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in memory
 * @str: character array
 * Return: a pointer to the duplicated string or NULL
 */
char *_strdup(char *str)
{
	char *p = (char *) malloc(strlen(str) + 1);

	if (p == NULL)
		return NULL;
	strcpy(p, str);
	return p;
}
