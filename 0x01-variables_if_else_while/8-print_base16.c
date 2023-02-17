#include <stdio.h>
#include <stdlib.h>

/**
  *main - main block
  *Return: 0
  */

int main(void)
{
	int i;
	int num =  '0';
	char letter = 'a';

	for (i = 0; i < 10; i++)
	{
		putchar(num);
		num++;
	}

	for (i = 0; i < 6; i++)
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
	return (0);
}
