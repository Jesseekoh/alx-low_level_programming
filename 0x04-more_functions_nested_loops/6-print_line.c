#include "main.h"

/**
  * print_line - prints the "-" character a number of times
  * @n: number of times to print "_"
  * Return: no return
  */

void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
