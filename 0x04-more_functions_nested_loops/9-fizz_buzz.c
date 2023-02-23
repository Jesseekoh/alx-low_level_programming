#include <stdio.h>

/**
  * main - prints number
  * Return: void
  */

void main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 5 == 0) && (i % 3 == 0))
		{
			printf("FIzzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}

		else
			printf("%d ", i);

		printf("\n");

	}
}
