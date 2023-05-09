#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: the set of bytes to accept
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int num = 0, a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				num++;
				break;
			}
		}

		if (accept[b] == '\0')
		{
			break;
		}
	}

	return (num);
}
