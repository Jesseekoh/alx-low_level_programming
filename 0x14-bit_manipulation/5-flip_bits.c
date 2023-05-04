#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 * @n: number
 * @m: number
 * Return: num
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned int count = 0;

	while (a != 0)
	{
		if (a & 1)
			count++;
		a >>= 1;
	}
	return (count);
}
