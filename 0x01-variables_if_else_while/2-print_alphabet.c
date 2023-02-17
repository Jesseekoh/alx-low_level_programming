#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the alphabet in lowercase
  *Return: 0
  */

int main(void)
{
	char letter = 'a';

	do {
		putchar(letter);
		letter++;
	} while (letter <= 'z');

	return (0);
}
