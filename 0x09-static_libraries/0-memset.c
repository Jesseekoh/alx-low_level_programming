#include "main.h"

/**
  * _memset - fills memory with constant byte
  * @s: adress to be filled
  * @b: constant byte
  * @n: number of bytes of memory
  * Return: char
  */
char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n -= 1;
	}
	return (s);
}
