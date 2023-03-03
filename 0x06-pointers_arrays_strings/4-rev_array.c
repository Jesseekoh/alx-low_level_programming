#include "main.h"

/**
  * reverse_array - reverses an array
  * @a: array to be reversed
  * @n: length of array
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int buffer;
	int i;

	for (i = 0; i < (n - 1) / 2; i++)
	{
		buffer = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = buffer;
	}
}
