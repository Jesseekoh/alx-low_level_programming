#include "main.h"

/**
  * print_rev - prints a string in reverse
  * @s: string to be reversed
  * Return: void
  */

void print_rev(char *s)
{
	int lengthOfStr = 0;
	int i;

	while (s[lengthOfStr] != '\0')
	{
		lengthOfStr++;
	}

	for (i = lengthOfStr - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
