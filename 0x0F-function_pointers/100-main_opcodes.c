#include <stdio.h>
#include "function_pointers.h"

/**
 * main - function entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 Success
 */

int main(int argc, char **argv)
{
	int i, numOfBytes;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	numOfBytes = atoi(argv[1]);
	if (numOfBytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (char *)main;
	for (i = 0; i < numOfBytes; i++)
	{
		if (i == numOfBytes - 1)
		{
			printf("%02hhx\n", opcode[i]);
			break;
		}
		printf("%02hhx ", opcode[i]);
	}
	return (0);
}
