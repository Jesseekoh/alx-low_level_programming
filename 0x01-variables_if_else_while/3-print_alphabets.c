#include <stdio.h>
#include <stdlib.h>

/**
  *main - prints the alphabets in lowercase then in uppercase
  *Return: 0
  */

int main(void)
{
	char smallLetter = 'a';
	char capitalLetter = 'A';

	while (smallLetter <= 'z')
	{
		putchar(smallLetter);
		smallLetter++;
	}
	while (capitalLetter <= 'Z')
	{
		putchar(capitalLetter);
		capitalLetter++;
	}

	putchar('\n');
	return (0);
}
