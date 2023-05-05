#include "main.h"
#include <stdio.h>

/**
 * *leet - encodes a string into 1337
 *
 * @str: string to encode
 *
 * Return: result
 */
char *leet(char *str)
{
	int a, b;
	char *letters = "aAeEoOtTlL";
	char *numbers = "4433007711";

	for (a = 0; str[a]; a++)
	{
		for (b = 0; letters[b]; b++)
		{
			if (str[a] == letters[b])
			{
				str[a] = numbers[b];
				break;
			}
		}
	}
	return (str);
}
