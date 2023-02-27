#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: string to be checked
  * Return: length of string
  */

int _strlen(char *s)
{
	int i = 0;
	int length = 0;

	while (*s[i] != '\0')
	{
		length++;
		i++;
	}

	return (length);
}
