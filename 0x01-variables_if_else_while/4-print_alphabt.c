#include <stdio.h>
#include <stdlib.h>

/**
  *main - main block
  *Return: 0
  */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' || letter != 'e')
		{
			putchar(letter);
			letter++;
		}
		else
		{
			continue;
		}
	}
	putchar('\n');

	return (0);
}
