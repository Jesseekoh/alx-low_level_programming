#include <stdio.h>
/**
  * main - prints Fizz, Buzz and FizzBuzz
  * Return: 0
  */

int main(void)
{
	int 1;

	for (i = 1; i <= 100; i++)

	if ((i % 3 == 0) && (i % 5 == 0))
		printf("FizzBuzz ");

	else if ((i % 3) == 0)
		printf("Fizz ");

	else if ((i % 5) == 0)
	{
		if (i != 100)
			printf("Buzz ");

		else
			printf("Buzz");
	}

	else
		printf("%d ", i);

		printf("\n");
	return (0);
}
