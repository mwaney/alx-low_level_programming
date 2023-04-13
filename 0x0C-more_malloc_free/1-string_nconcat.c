#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - function that concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to take from s2
 * Return: pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		j++;
	}
	newstr = malloc(sizeof(char) * (i + j + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0, j = 0;
	while (s1[i] != '\0')
	{
		newstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0' && j < n)
	{
		newstr[i] = s2[j];
		i++;
		j++;
	}
	newstr[i] = '\0';
	return (newstr);

}
