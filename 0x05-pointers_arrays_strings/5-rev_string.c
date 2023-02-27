#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: void
  */

void rev_string(char *s)
{
	int lengthOfStr = _strlen(s);
	int i, j;
	char buffer;

	for (i = 0; i < lengthOfStr / 2; i++)
	{
		buffer = s[i];
		s[i] = s[lengthOfStr - 1 - i];
		s[lengthOfStr - 1 - i] = buffer;
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
