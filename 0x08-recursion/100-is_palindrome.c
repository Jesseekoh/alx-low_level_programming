#include "main.h"

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string
  * Return: 1 if true and 0 if false
  */

int is_palindrome(char *s)
{
	int i = 0;
	int len = get_strlen(s);

	if (!(*s))
	{
		return (1);
	}

	return (check_palindrome(s, i, len));
}

/**
  * get_strlen - finds the length of a string
  * @s: string to check
  * Return: length of string
  */
int get_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + get_strlen(s + len);
	}
	return (len);
}

/**
  * check_palindrome - checks if a string is a palindrome
  * @s: string to check
  * @i: index of char
  * @len: length of s
  * Return: 1 if true and 0 if false
  */

int check_palindrome(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, i + 1, len));
	}
}
