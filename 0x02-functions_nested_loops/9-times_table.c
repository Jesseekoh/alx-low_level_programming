#include "main.h"

/**
  * times_table - prints the times table
  * Return: void
  */

void time_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;

			if (j == 0)
				_putchar(product + '0');

			if (product < 10 && j!= 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}

		_putchar('\n');
	}
}
