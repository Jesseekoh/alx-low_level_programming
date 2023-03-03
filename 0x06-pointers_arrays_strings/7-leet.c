#include "main.h"

/**
  * leet - encodes a string
  * @str: string to be encoded
  * Return: string
  */
char *leet(char *str)
{
	int i = 0;
	int j = 0;
	char a[] = "aAeEoOtTlL";

	while (str[i] != '\0')
	{
		for (j = 0; j < 10; j += 2)
		{
			if (str[i] == a[j] || str[i] == a[j] - 32)
			{
				str[i] = a[j + 1];
				break;
			}
		}
		i++;
	}
	return (str);
}
