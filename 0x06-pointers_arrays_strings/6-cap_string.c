#include "main.h"
#include <stdio.h>

/**
 * *cap_string - Capitalizes all words of a string
 *
 * @str: string to be capitalized
 *
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int a, b;
	char seps[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 97 && str[0] >= 122)
	{
		str[0] -= 32;
	}
	for (a = 1; str[a] != '\0'; a++)
	{
		for (b = 0; seps[b] != '\0'; b++)
		{
			if (str[a - 1] == seps[b] && str[a] >= 97 && str[a] <= 122)
			{
				str[a] -= 32;
			}
		}
	}
	return (str);
}
