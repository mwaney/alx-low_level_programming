#include "main.h"
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
