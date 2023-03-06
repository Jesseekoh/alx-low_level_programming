#include "main.h"

/**
  * _strchr - returns a pointer to the first occurence of a character in a
  * string or NULL if the character is not found
  * @s: string to be searched
  * @c: character searched for
  * Return: pointer to the first occurence or NULL
  */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return(s[i]);
		}
	}
	if (s[i] == c)
	{
		return (s[i]);
	}
	else
		return ('\0');
}
