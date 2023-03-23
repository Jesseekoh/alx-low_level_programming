#include "function_pointers.h"

/**
 * main - generates opcodes.
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: the opcodes
 */

int main(int argc, char **argv)
{
	int i, n;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", ((char *)main)[i]);
		if (i == (n - 1))
			printf("\n");
		else
			printf(" ");
	}
	return (0);
}
