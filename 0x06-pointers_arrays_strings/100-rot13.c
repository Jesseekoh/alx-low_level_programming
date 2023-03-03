#include "main.h"

/**
  * rot13 - encodes string in rot13
  * @str: string to be encoded
  * Return: encoded string
  */
char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		while (a[j] != '\0')
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
