#include "main.h"

/**
  * leet - encodes a string
  * @str: string to be encoded
  * Return: string
  */
char *leet(char *str)
{
	int i, j;

	char c[] = "a4e3o0t7l1";

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		for (j = 0; j <= 9; j += 2)
		{
			if (str[i] == c[j] || str[i] == c[j] - 32)
			{
				str[i] = c[j + 1];
				break;
			}
		}
		i++;
	}
	return (str);
}
