#include "main.h"

/**
  * print_array - prints set number of elements of an array
  * @a: array
  * @n: number of elements to print
  * Return: void
  */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i != n -1)
		{
			_putchar(a[i]);
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(a[i]);
		}
		i++;
	}

	_putchar('\n');
}

