#include "main.h"

/**
  * puts_half - prints half a string separated by commas
  * @str: string to be printed
  * Return: void
  */

void puts_half(char *str)
{
	int lenStr = _strlen(str);
	int i;

	if (lenStr % 2 == 0)
	{
		i = 0;

		while (i < lenStr / 2)
		{
			_putchar(str[i]);
			i++;
		}
	}
	else
	{
		i = (lenStr + 1) / 2;

		while (i > lenStr)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
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
