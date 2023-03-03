#include "main.h"

/**
  * _strncat - concats string
  * @dest: string
  * @src: string
  * @n: number of bytes
  * Return: string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n <= 0)
		return (dest);
	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i++] = '\0';
	return (dest);
}


