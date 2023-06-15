#include <string.h>
#include "lists.h"
/**
 * main - function generates a key for a given input
 * @argcc: argument count.
 * @argv: argument vector
 * Return: Always 0.
 */

int main(__attribute__((unused))int argc, char *argv[])
{
	int i, temp;
	int size = strlen(argv[1]);
	char encr[7], *charset;

	charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	temp = (size ^ 59) & 63;
	encr[0] = charset[temp];
	temp = 0;
	for (i = 0; i < size; i++)
		temp += argv[1][i];
	encr[1] = charset[(temp ^ 79) & 63];
	temp = 1;
	for (i = 0; i < size; i++)
		temp *= argv[1][i];
	encr[2] = charset[(temp ^ 85) & 63];

	temp = 0;
	for (i = 0; i < size; i++)
	{
		if (argv[1][i] > temp)
			temp = argv[1][i];
	}
	srand(temp ^ 14);
	encr[3] = charset[rand() & 63];
	temp = 0;
	for (i = 0; i < size; i++)
		temp += (argv[1][i] * argv[1][i]);
	encr[4] = charset[(temp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		temp = rand();
	encr[5] = charset[(temp ^ 229) & 63];
	encr[6] = '\0';
	printf("%s", encr);
	return (0);
}
