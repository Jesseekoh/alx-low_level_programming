#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: index of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (n & (1 << index))
		return (1);
	return (0);
}
