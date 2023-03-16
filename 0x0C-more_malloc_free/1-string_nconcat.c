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
	unsigned int l;

	l = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[l])
		l++;
	newStr = malloc(sizeof(char) * (l + n));
	if (newStr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
	{
		newStr[i] =  s1[i];
	}

	for (i = 0; i < n; i++)
	{
		newStr[l++] = s2[i];
	}
	newStr[l] = '\0';
	return (newStr);


}
