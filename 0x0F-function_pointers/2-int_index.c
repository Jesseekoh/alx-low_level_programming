#include "function_pointers.h"

/**
  * int_index - searches for an int in an array
  * @array: array to be searched
  * @size: size of array
  * @cmp: pointer to function that compares values
  * Return: if found - index of first occurence; if not - -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (1);
	}
	return (-1);
}
