#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: argument count
 * @argv: argument vectore
 * Return: 0 Success
 */

int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
