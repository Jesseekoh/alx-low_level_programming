#include <stdio.h>

/**
  * main - main block prints the size of various types
  * Return: 0
  */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %u byte(s)\n", (unsigned int)sizeof(a));
	printf("Size of a int: %u byte(s)\n", (unsigned int)sizeof(b));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(d));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(e));
	return (0);
}
