#include <stdio.h>

/**
 * main -Entry point
 * Description: Print all fibonaci numbers upto 50
 * Return: always 0
 */
int main(void)
{
	int start = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (start <= 50)
	{
		if (start == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		start++;
	}

	return (0);
}
