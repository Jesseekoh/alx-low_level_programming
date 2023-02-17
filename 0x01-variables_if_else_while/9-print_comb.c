#include <stdio.h>
#include <ctype.h>
/**
*main - Prints all single digits with , and space followed by new line
*
*Return: returns 0
*/
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
