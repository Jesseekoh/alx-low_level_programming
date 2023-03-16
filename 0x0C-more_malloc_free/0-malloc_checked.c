#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: unsigned int
  * Return: if fails 98; if successful pointer to allocated memory
  */

void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
