#include "main.h"

/**
  * rev_string - reverses a string
  * @s: string to be reversed
  * Return: void
  */

void rev_string(char *s)
{
	char buffer = s;
	int lengthOfStr = 0;
	int i, j;

	while (s[lengthOfStr] != '\0')
	{
		lengthOfStr++;
	}

	for (i = lengthOfStr; i >= 0; i--)
	{
		for (j = 0; j <= lengthOfStr; j++)
		{
			buffer[j] = s[i];
		}
	}

	*s = buffer;
}
