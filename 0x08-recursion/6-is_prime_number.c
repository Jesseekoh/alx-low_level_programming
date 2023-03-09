#include "main.h"

/**
  * is_prime_number - checks if an int is a prime number
  * @n: int
  * Return: 1 if int is a prime number else 0
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (is_prime(2, n));
}

/**
  * is_prime - checks if number is a prime number
  * @a: int
  * @n: int
  * Return: 1 if is_prime and 0 if false
  */

int is_prime(int a, int n)
{
	if (b % a == 0 || b < 2)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (is_prime(a + 1, n);
}
