#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: number pointer
 * @index: index
 * @Return: 1 if success or -1 if failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
