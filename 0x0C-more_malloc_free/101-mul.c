#include <stdlib.h>
#include "main.h"
#include <stdio.h>

int _len(char *str);
int _isdigit(int c);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	char *val1, *val2;
	int i, j, k = 0, val1len, val2len, total_len, num1, num2;
	int *ans;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	val1 = argv[1], val2 = argv[2];

	for (i = 0; val1[i] != '\0'; i++)
	{
		if (!_isdigit(val1[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; val2[i] != '\0'; i++)
	{
		if (!_isdigit(val2[i]))
		{
			printf("Error\n");
			exit(98);
		}
	}

	val1len = _len(val1);
	val2len = _len(val2);
	total_len = val1len + val2len + 1;

	ans = malloc(sizeof(int) * total_len);

	if (ans == NULL)
		return (1);

	for (i = 0; i < total_len; i++)
		ans[i] = 0;

	for (val1len = val1len - 1; val1len >= 0; val1len--)
	{
		num1 = val1[val1len] - '0';
		j = 0;

		for (val2len = _len(val2) - 1; val2len >= 0; val2len--)
		{
			num2 = val2[val2len] - '0';
			j += ans[val1len + val2len + 1] + (num1 * num2);
			ans[val1len + val2len + 1] = j % 10;
			j /= 10;
		}

		if (j > 0)
			ans[val1len + val2len + 1] += j;
	}

	for (i = 0; i < total_len - 1; i++)
	{
		if (ans[i])
			k = 1;
		if (k)
			_putchar(ans[i] + '0');
	}

	if (!k)
		_putchar('0');

	_putchar('\n');
	free(ans);
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
 * _len - returns length of the string
 * @str: the actual string
 * Return: length of the string;
 */
int _len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}
