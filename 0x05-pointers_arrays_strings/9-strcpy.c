#include "main.h"

/**
  * _strcpy - copies a string to a pointed variable
  * @dest: target pointed variable
  * @src: string to copy
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
