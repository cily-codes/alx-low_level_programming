#include "main.h"

/**
 * _strcmp - Compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Description: Compares the two strings s1 and s2. The function returns an
 * integer less than, equal to, or greater than zero if s1 is found,
 * to be less than, to match, or be greater than s2.
 *
 * Return: An integer value
 */
int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}
		a++;
	}

	if (s1[a] == '\0' && s2[a] != '\0')
	{
		return (-s2[a]);
	}
	if (s1[a] != '\0' && s2[a] == '\0')
	{
		return (s1[a]);
	}

	return (0);
}
