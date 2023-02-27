#include "main.h"

/**
  * swap_int - swaps the value of two integers
  * @a: int to change
  * @b: int to change
  * Return: void
  */

void swap_int(int *a, int *b)
{
	int swapInt = *b;
	*b = *a;
	*a = swap_int;
}
