#include "main.h"

/**
  * alloc_grid - returns a pointer to a 2 dimensional array of integers
  * @width: int
  * @height: int
  * Return: NULL or pointer to 2D array
  */
int **alloc_grid(int width, int height)
{
	int *array[], i, j;

	i = 0;
	j = 0;
	if (width == 0 || height == 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(array[i]);
			}
			free(array[i]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
