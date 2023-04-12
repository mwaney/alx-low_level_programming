#include "main.h"
#include <stdlib.h>

int _words(char *str);

/**
 * strtow -splits a string into words
 * @str: string to be split
 * Return: the split string or NULL
 */
char **strtow(char *str)
{
	char *temp;
	char **pp;
	int i, j = 0, k = 0, len = 0, words, beg, fin;

	while (str[len])
		len++;
	words = _words(str);
	if (words == 0)
		return (NULL);
	pp = malloc(sizeof(char *) * (words + 1));
	if (pp == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				fin = i;
				temp = malloc(sizeof(char) * (j + 1));
				if (temp == NULL)
					return (NULL);
				while (beg < fin)
					*temp++ = str[beg++];
				*temp = '\0';
				pp[k] = temp - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			beg = i;
	}
	pp[k] = NULL;
	return (pp);
}

/**
 * _words -counts the number of words
 * @str: string containing the words
 * Return: the Number of words
 */
int _words(char *str)
{
	int isword, i, j;

	isword = 0;
	j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			isword = 0;
		else if (isword == 0)
		{
			isword = 1;
			j++;
		}
	}
	return (j);
}
