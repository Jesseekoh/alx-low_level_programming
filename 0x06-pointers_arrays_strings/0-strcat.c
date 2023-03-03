#include "main.h"

/**
  * _strcat - concatenates a string
  * @dest: First string
  * @src: string to be appended to dest
  * Return: the concatenated string
  */

char *_strcat(char *dest, char *src)
{
	int len;
	int i;


	for (len = 0; dest[len] != '\0'; len++)
	{

	}

	for (i = 0; srcp[i] != '\0'; i++)
	{
		dest[len + i] = src[i];

	}

	return (dest);
}
