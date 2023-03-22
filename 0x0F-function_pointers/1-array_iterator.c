#include "function_pointers.h"

/**
  * array_iterator - executes a function on every member of an array
  * @array: array to carry out function on
  * @size: size of the array
  * @action: pointer to function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;
	for (; size > 0; size--)
	{
		action(*array);
		array++;
	}
}
