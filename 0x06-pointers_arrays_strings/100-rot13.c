#include "main.h"

/**
 * rot13 - function to encrypt using ROT-13
 * @str: string to be encrypted
 * Return: modified string
 */
char *rot13(char *str)
{
	int i, j;
	char arr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char arr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == arr1[j])
			{
				str[i] = arr2[j];
				break;
			}
		}
	}
	return (str);
}
