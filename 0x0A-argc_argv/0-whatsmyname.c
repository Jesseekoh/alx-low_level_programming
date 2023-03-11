#include <stdio.h>

/**
  * main - prints name of program
  * @argc: number of arguments
  * @argv: all the arguments
  * Return: 0
  */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", *argv);
	return (0);
}
