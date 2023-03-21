#include "main.h"

/**
 * times_table - program that prints the times table
 * Returns: voi
 */
void times_table(void)
{
	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			int prod = row * col;
			int num;

			if (prod == 0)
			{
				num = 0;
				_putchar(num + '0');
			}
			else
			{
				int prod_num = 0;

				while (prod > 0)
				{
					num = prod % 10;
					prod /= 10;
					prod_num++;
				}
				prod = row * col;

				while (prod_num > 0)
				{
					num = prod / pow(10, prod_num - 1);
					prod %= (int) pow(10, prod_num - 1);
					prod_num--;
					_putchar(num + '0');
				}
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
