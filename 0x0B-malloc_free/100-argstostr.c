#include "main.h"
#include <stdlib.h>
/**
 * argstostr -concatenates all the arguments of your program
 * @ac: first argument
 * @av: second argument
 * Return: pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int len;
	int total = 0;
	char *ptr;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j])
		{
			total++;
			j++;
		}
		total++;
		i++;
		j = 0;
	}
	ptr = malloc(sizeof(char) * (1 + total));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	len = 0;
	j = 0;
	while (i < ac)
	{
		while (av[i][j])
		{
			ptr[len] = av[i][j];
			len++;
			j++;
		}
		ptr[len] = '\n';
		len++;
		i++;
		j = 0;
	}
	ptr[len] = '\0';
	return (ptr);
}
