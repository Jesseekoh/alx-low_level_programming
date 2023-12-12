#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using linear search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: returns the index where value is found or -1 if
 * value is not present in array
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	for (; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{

			return (i);
		}
	}

	return (-1);
}
