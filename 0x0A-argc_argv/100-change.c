#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the minimum number of coins to make change
  * @argc: number of args
  * @argv: array of args
  * Return: 0 if successful and 1 if fails
  */

int main(int argc, char *argv[])
{
	int cents;
	int coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	coins = 0;

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
			coins++;
		}
		else if (cents >= 10)
		{
			cents -= 10;
			coins++;
		}
		else if (cents >= 2)
		{
			cents -= 2;
			coins++;
		}
		else
		{
			cents -= 1;
			coins++;
		}
	}
	printf("%i\n", coins);
	return (0);
}
