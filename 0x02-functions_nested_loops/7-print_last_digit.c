#include "main.h"

/**
  * print_last_digit - prints the value of the last digit of and integer
  * @n: number to check
  * Return: 0
  */

int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
