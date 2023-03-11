#include <stdio.h>

/**
  * main - prints the number of arguments
  * @argv: array of args
  * @argc: size of argv
  * Return: 0
  */

int main(int argc, char *argv[])
{
	(void)argv;

	if (argc > 0)
	{
		printf("%i\n", argc - 1);
	}
	return (0);
}
