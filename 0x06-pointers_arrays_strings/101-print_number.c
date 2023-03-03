#include "main.h"

/**
  * print_number - prints an integer
  * @n: integer to print
  * Return: void
  */
void print_number(int n)
{
	unsigned int a = n;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');
}
