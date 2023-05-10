#include "main.h"

int _strlen(char *s);
int pal_check(char *s, int front, int back);

/**
 * is_palindrome - Checks if a string is a palindrome
 *
 * @s: The string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	if (len <= 1)
	{
		return (1);
	}
	else
	{
		return (pal_check(s, 0, len - 1));
	}
}

/**
 * pal_check - function to check if a string is a palindrome
 *
 * @s: The string to check
 * @front: The front of string to check
 * @back: The back of string to check
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int pal_check(char *s, int front, int back)
{
	if (front >= back)
	{
		return (1);
	}
	else if (s[front] != s[back])
	{
		return (0);
	}
	else
	{
		return (pal_check(s, front + 1, back - 1));
	}
}

/**
 * _strlen - find length of a string
 *
 * @s: The string to find
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (_strlen(s + 1) + 1);
	}
}
