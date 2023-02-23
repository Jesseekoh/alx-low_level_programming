#include "main.h"

/**
  * print_diagonal - prints forward slashes
  * @n: number of ot spaces before slash
  * Return: no return
  */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = o; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
