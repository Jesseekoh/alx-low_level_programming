#include "main.h"

/**
  * array_range - creates an array of integers
  * @min: int
  * @max: int
  * Return: pointer to newly created array
  */

int *array_range(int min, int max)
{
	int *arr;
	int i, j;

	j = 0;
	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		arr[j] =  i;
		j++;
	}
	return (arr);
}
