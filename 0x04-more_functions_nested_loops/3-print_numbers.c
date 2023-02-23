#include "main.h"

/**
  * print_numbers - prints numbers 0 to 9
  * Return: void
  */

void print_numbers(void)
{
	char i = '0';

	while (i < '10')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
