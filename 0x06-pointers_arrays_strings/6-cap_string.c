#include "main.h"

/**
  * cap_string - capitalizes the first character of every word.
  * @str: string
  * Return: capitalized string
  */
char *cap_string(char *str)
{
	int i = 1;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i -1] == ' ' ||
			str[i - 1] == '\n'||
			str[i - 1] == '\t' ||
			str[i -1] == ';' ||
			str[i -1] == '.' ||
			str[i -1] == ',' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			str[i - 1] == '!')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
