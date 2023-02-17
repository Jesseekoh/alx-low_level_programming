#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints numbers with the putchar method
  *Return: 0
  */

int main(void)
{
	int num = '0';
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
