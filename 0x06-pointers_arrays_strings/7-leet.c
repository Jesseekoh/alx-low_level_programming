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

	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (str[i] != '\0')
	{
		for (; j < 10; j++)
		{
			if (letter[j] == str[i])
			{
				str[i] = numbers[j];
			}
		}
		i++;
	}
	return (str);
}
