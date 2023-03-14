#include "main.h"

/**
  * str_concat - concatenates two strings
  * @s1: string
  * @s2: string
  * Return: NULL if fails
  */
char *str_concat(char *s1, char *s2)
{
	int i, j, k;
	char *newStr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
	}
	for (j = 0; s2[j]; j++)
	{
	}

	newStr = malloc(sizeof(char) + 1 * (i + j));
	if (newStr == NULL)
	{
		return (NULL);
	}

	while (*s1)
	{
		newStr[k] = *s1++;
		k++;
	}
	while (*s2)
	{
		newStr[k] = *s2++;
		k++;
	}
	return (newStr);
}
