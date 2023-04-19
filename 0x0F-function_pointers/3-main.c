#include <stdio.h>
#include "calc.h"

/**
 * main- entry point
 * @argc: argument vector
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc, char **argv)
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((strcmp(argv[2], "+") != 0) &&
			(strcmp(argv[2], "-") != 0) &&
			(strcmp(argv[2], "*") != 0) &&
			(strcmp(argv[2], "/") != 0) &&
			(strcmp(argv[2], "%") != 0))
	{
		printf("Error\n");
		exit(99);
	}
	if ((num1 == 0 || num2 == 0) &&
			(strcmp(argv[2], "/") ||
			 strcmp(argv[2], "%")))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);

	return (0);
}
