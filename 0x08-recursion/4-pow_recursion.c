#include "main.h"

/**
  * _pow_recursion - returns the value of x to the power of y
  * @x: int
  * @y: int
  * Return: int
  */
int _pow_recursion(int x, int y)
{

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
