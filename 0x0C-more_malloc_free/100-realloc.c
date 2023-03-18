#include "main.h"
#include <stdlib.h>

/**
  * _realloc - reallocates a memory block using malloc and free
  * @ptr: pointer to previous allocated memory
  * @old_size: size in bytes of the allocated space for ptr
  * @new_size: new size of allocated memory
  * Return: void
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *block;
	unsigned int i;

	i = 0;
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	block = malloc(new_size);
	if (block == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	while (i < old_size)
	{
		*((char *)block + i) = *((char *)ptr + i);
		i += 1;
	}
	free(ptr);
	return (block);
}
