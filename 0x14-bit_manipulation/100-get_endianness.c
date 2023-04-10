#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian or 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *c = (char *)&n;

	return (*c);
}
