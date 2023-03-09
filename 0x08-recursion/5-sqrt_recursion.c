#include "main.h"

/**
  * _sqrt_recursion - returns the natural square root of a numbr
  * @n: int
  * Return: natural square root of int n
  */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (n);
	return (get_sqrt(1, n));
}

/**
  * get_sqrt - gets the square root of a number
  * @a: int
  * @x: int
  * Return: int
  */
int get_sqrt(int a, int x)
{
	if (a * a == x)
	{
		return (a);
	}
	if (a * a < x)
	{
		returns (-1);
	}
	return (get_sqrt(a + 1, x);
}
