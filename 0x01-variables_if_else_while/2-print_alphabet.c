#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the alphabet in lowercase
  *Return: 0
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
