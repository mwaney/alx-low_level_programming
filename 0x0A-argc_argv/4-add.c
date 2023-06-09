#include <stdio.h>
#include "main.h"
#include <string.h>

int contain_symbol(char *s);

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success 1 Failure
 */
int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (contain_symbol(argv[i]))
			{
				sum += _atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", sum);
	return (0);
}
/**
 * _isdigit - check the code
 * @c: parameter for function
 * Return: 1 if true 0 if false.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
/**
 * _atoi - converts strings to integers
 * @s: parameter of string
 * Return: int converted
 */
int _atoi(char *s)
{
	int i, j, n, len, started, digit;

	i = 0;
	j = 0;
	n = 0;
	len = 0;
	started = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && started == 0)
	{
		if (s[i] == '-')
			++j;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (j % 2)
				digit = -digit;
			n = n * 10 + digit;
			started = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			started = 0;
		}
		i++;
	}

	if (started == 0)
		return (0);

	return (n);
}

/**
 * contain_symbol - checks if all characters are digits
 * @s: an array of character
 * Return: 0 Success
 */
int contain_symbol(char *s)
{
	unsigned int i;

	for (i = 0; i < strlen(s); i++)
	{
		if (!_isdigit(s[i]))
			return (0);
	}
	return (1);
}
