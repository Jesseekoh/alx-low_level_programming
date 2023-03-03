#include "main.h"

/**
  * string_toupper - changes the small letters in a string to uppercase
  * @str: string
  * Return: string
  */
char *string_toupper(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
