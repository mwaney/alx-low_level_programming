#include <stdio.h>
#include "main.h"

/**
 * main - prints out the name of the function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
