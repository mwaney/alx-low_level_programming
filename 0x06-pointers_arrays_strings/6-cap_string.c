#include "main.h"

/**
 * cap_string - capitalize the first letter of each word
 * @str: Pointer to the string to be capitalized
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int i, prev;

	i = 0;
	prev = 1;

	while (str[i] != '\0')
	{
		if (prev && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		prev = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')' || str[i] == '{'
				|| str[i] == '}');
		i++;
	}
	return (str);
}
