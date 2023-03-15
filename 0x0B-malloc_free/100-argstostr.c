#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments
 * @av: array of arguments
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *newStr;
	int i, j, k, len;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			len++;
		}
		len++;
	}

	newStr = malloc((sizeof(char) * len) + 1);
	if (newStr == NULL)
	{
		return (NULL);
	}

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			newStr[k] = av[i][j];
			j++;
			k++;
		}
		newStr[k] = '\n';
		k++;
	}
	newStr[k] = '\0';
	return (newStr);
}
