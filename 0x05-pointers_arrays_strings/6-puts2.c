#include "main.h"

/**
  * puts2 - prints every other character of a string followed by a new line.
  * @str: string to be printed
  * Return: void
  */

void puts2(char *str)
{
	int i = 0;
	int lengthOfStr = _strlen(str);

	while (i < lengthOfStr - 1)
	{
		_putchar(str[i]);
		i += 2;
	}
}


/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  * Return: length of string
  */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
