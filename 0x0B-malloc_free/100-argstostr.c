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

	len = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			len++;
			j++;
		}
		len++;
		i++;
	}

	newStr = malloc((sizeof(char) * len) + 1);

	if (newStr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			newStr[k] = av[i][j];
			j++;
			k++;
		}
		newStr[k] = '\n';
		k++;
		i++;
	}
	newStr[k] = '\0';
	return (newStr);
}
