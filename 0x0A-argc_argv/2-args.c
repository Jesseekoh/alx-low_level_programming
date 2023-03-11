#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints all the arguments it recieves
  * @argc: number of args
  * @argv: array of args
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
