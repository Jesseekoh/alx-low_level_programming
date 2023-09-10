#include "main.h"
#include <stdio.h>

/**
 * _atoi - converests a string to an integer
 * @s: string to convert
 * Return: number
 */

int _atoi(char *s)
{
	int a, i, b;

	b = 1;
	i = a = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != 0)
	{
		if (s[i] == '-')
			b = b * -1;
		i++;
	}
	while ((s[i] >= '0' && s[i] <= '9') && s[i] != 0)
	{
		if (a >= 0)
		{
			a = a * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			a = a * 10 - (s[i] - '0');
			i++;
		}
	}
	b = b * -1;
	return (a * b);
}
