#include <stdio.h>
#include "main.h"
/**
  * print_to_98 - prints all numbers from n to 98
  * @n: number to start printing from
  * Return: void
  */

void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("98\n");
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i == 98)
			{
				printf("%i\n", i);
			}
			else
				printf("%i, ", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i == 98)
				printf("%i\n", i);
			else
				printf("%i, ", i);
		}
	}
}
