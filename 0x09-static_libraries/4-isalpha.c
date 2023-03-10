#include "main.h"

/**
  * _isalpha - checks if a character is an alphabet
  * @c: character to check
  * Return: 1 if true, 0 if false
  */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}
