#include "variadic_functions.h"

/**
  * sum_them_all - sums up all parameters
  * @n: count of numbers to be added
  * Return: sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
			sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
