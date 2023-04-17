#include <stdio.h>
#define FILE __FILE__

/**
 * main - function that prints the name of file
 * it was compiled from
 * Return: 0 Success
 */
int main(void)
{
	printf("%s\n", FILE);
	return (0);
}
