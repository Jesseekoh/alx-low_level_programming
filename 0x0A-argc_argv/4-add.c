#include <stdio.h>
#include <stdlib.h>

/**
  * main - adds positive integers
  * @argc: number of args
  * @argv: array of args
  * Return: 0 if successful or 1 if fails
  */

int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
