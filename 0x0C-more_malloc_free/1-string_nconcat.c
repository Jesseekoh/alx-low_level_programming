#include "main.h"

/**
  * string_nconcat - cocatenates two strings
  * @s1: first string
  * @s2: second string
  * @n: number of bytes of s2
  * Return: pointer to newly allocated space in memory
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, l;
	char *concat;

	i = 0;
	l = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		l++;
		i++;
	}
	concat = malloc(sizeof(char) * (l + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	l = 0;
	while (s1[i])
	{
		concat[l++] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		concat[l++] = s2[i];
		i++;
	}
	concat[l] = '\0';
	return (concat);
}
