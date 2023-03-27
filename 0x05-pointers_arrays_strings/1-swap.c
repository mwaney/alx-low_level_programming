#include "main.h"

/**
 * swap_int - Swaps the value of two integers
 * @a: first variable
 * @b: second variable
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
