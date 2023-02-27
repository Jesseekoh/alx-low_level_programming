#include <stdio.h>

/**
  * main - prints the first 50 numbers of the fibonacci sequence
  * Return: 0
  */

int main(void)
{
	int i;
	int fib1 = 0;
	int fib2 = 1;
	int sum;

	for (i = 0 ; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%d", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
