#include "main.h"

/**
  * is_palindrome - checks if a string is a palindrome
  * @s: string
  * Return: 1 if true and 0 if false
  */

int is_palindrome(char *s)
{
	int i = 0;
	int len = getStrlen(s);

	if (!(*s))
	{
		return (1);
	}

	return (checkPalindrome(s, i, len);
}

/**
  * findStrlen - finds the length of a string
  * @s: string to check
  * Return: length of string
  */

int findStrlen(char @s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len = len + findStrlen(s + len);
	}
	return (len);
}

/**
  * checkPalindrome - checks if a string is a palindrome
  * @s: string to check
  * @i: index of char
  * @len: length of s
  * Return: 1 if true and 0 if false
  */

int checkPalindrome(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (checkPalindrome(s, i + 1, len));
	}
}
