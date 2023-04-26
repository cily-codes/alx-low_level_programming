#include "main.h"
#include <stdio.h>

/**
 * _islower - Shows 1 if the input is a lowercase character
 *
 * @c: The character in ASCII code
 *
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
        putchar('\n');
}
