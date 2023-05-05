#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to uppercase
 *
 * @str: string to be changed
 *
 * Return: Lowercase to Uppercase
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] -= 32;
		}
		a++;
	}
	return (str);
}
