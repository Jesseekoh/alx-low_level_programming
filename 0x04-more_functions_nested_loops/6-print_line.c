#include "main.h"

/**
  * print_line - prints the "-" character a number of times
  * @n: number of times to print "_"
  * Return: no return
  */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n >= 0)
		{
			_putchar('_');
			n--;
		}
	}
	_putchar('\n');
}
