#include "main.h"

/**
  * _islower - Checks if a letter is in lowercase
  * @c: the letter to check
  * Return: 1 if letter is lowercase and 0 if letter is not
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
