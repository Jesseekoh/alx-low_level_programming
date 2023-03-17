#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * string_nconcat - concatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes
  * Return: pointer to newly allocated space in memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, len = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len])
		len++;
	concat = malloc(len + n + 1);
	if (concat == NULL)
		return (NULL);
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		concat[i + j] = s2[j++];
	}
	concat[i + j] = '\0';
	return (concat);
}
