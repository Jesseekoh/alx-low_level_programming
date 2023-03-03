#include "main.h"

/**
  * leet - encodes a string
  * @str: string to be encoded
  * Return: string
  */
char *leet(char *str)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	while (str[i] != '\0')
	{
		for (; j < 10; j++)
		{
			if (a[j] == str[i])
			{
				str[i] = b[j];
			}
		}
		i++;
	}
	return (str);
}
