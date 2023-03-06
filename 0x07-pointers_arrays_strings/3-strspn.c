#include "main.h"

/**
  * _strspn - gets the length of a  prefix substring
  * @s: initial string
  * @accept: substring
  * Return: the number of bytes
  */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k;

	k = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (k);
		}
	}
	return (k);
}
