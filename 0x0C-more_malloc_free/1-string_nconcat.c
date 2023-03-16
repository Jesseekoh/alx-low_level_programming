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
	char *newStr;
	int i;
	int l;
	unsigned int j;

	l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 == "";

	for (i = 0; s1[i]; i++)
	{
		l++;
	}

	l += n;

	newStr = malloc(sizeof(char) * (l + 1));
	l = 0;
	if (newStr == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
	{
		newStr[l] = s1[i];
		l++
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		newStr[l] = s2[i];
		l++;
	}
	newStr[l] = '\0';
	return (newStr);

}
