#include "lists.h"

/**
 * main - Function to print passwords for the crackme5 executable.
 * @argc: The argument count
 * @argv: Argument vector
 * Return: Always 0.
 */
int main(__silent int argc, char *argv[])
{
	char password[7], *charset;
	int input_length = strlen(argv[1]), i, tmp;

	charset = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";

	tmp = (input_length ^ 59) & 63;
	password[0] = charset[tmp];

	tmp = 0;
	for (i = 0; i < input_length; i++)
		tmp += argv[1][i];
	password[1] = charset[(tmp ^ 79) & 63];

	tmp = 1;
	for (i = 0; i < input_length; i++)
		tmp *= argv[1][i];
	password[2] = charset[(tmp ^ 85) & 63];

	tmp = 0;
	for (i = 0; i < input_length; i++)
	{
		if (argv[1][i] > tmp)
			tmp = argv[1][i];
	}
	srand(tmp ^ 14);
	password[3] = charset[rand() & 63];

	tmp = 0;
	for (i = 0; i < input_length; i++)
		tmp += (argv[1][i] * argv[1][i]);
	password[4] = charset[(tmp ^ 239) & 63];

	for (i = 0; i < argv[1][0]; i++)
		tmp = rand();
	password[5] = charset[(tmp ^ 229) & 63];

	password[6] = '\0';
	printf("%s", password);
	return (0);
}

