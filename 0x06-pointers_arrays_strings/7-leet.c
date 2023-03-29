#include "main.h"

/**
 * leet - takes in a string as an argument and replaces
 *  certain characters with numbers.
 *  @str: string to be converted to leet speak
 *  Return: A pointer to the modified leet speak string
 */
char *leet(char *str)
{
	int i, j;
	char arr1[] = "aAeEoOtTlL";
	char arr2[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == arr1[j])
				str[i] = arr2[j];
		}
	}
	return (str);
}
