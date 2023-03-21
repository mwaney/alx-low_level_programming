#include "main.h"

/**
 * times_table - program that prints the times table
 * Returns: void
 */
void times_table(void)
{
	int row, col, prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (col = 1; col <= 9; col++)
		{
			prod = row * col;
			_putchar(44);
			_putchar(32);
			if (prod <= 9)
			{
				_putchar(32);
				_putchar(prod + 48);
			}
			else
			{
				_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
