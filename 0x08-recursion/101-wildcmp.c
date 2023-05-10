#include "main.h"

/**
 * wildcmp - function that compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 if the strings are identical, otherwise return 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		if (*s1 == '\0')
		{
			return (wildcmp(s1, s2 + 1));
		}
		else
		{
			return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
		}
	}
	else if (*s1 == '\0')
	{
		return (*s2 == '\0');
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}
