#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the product of two numbers
  * @argc: number of args
  * @argv: array of args
  * Return: 0 if successful or 1 if 2 args are not provided
  */

int main(int argc, char *argv[])
{
	int a, b, product;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	product = a * b;

	printf("%i\n", product);

	return (0);
}
