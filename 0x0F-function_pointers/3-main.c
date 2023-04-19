#include <stdio.h>
#include "3-calc.h"

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
	char *sign = argv[2];
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(sign) == NULL || sign[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*sign == '/' && ((num2 == 0) || (num1 == 0))) ||
			(*sign == '%' && ((num2 == 0) || (num1 == 0))))
	{
		printf("Error\n");
		exit(100);
	}

	result = (*get_op_func(argv[2]))(num1, num2);
	printf("%d\n", result);

	return (0);
}
