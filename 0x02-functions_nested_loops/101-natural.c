#include <stdio.h>

/**
  * main - prints the sum of all multiples of 3 less than 1024
  * Return: 0
  */

int main(void)
{
	int i;
	int sum;
	int limit = 1024;

	for (i = 1; i < limit; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum+= i;
		else
			continue;
	}

	printf("%d\n", sum);

	return (0);
}
