#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - main block
  * @argc: number of args
  * @argv: array of args
  * Return: int
  */

int main(int argc, **argv)
{
	int num1, num2, result;
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	oprt = get_op_func(argv[2]);
	if (oprt == 0)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	result = oprt(num1, num2);
	printf("%d\n", result);
	return (0);


}
