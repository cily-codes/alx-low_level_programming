#include "main.h"

/**
 * _islower - Shows 1 if thhe input is a lowercase character
 *
 * @c: The character in ASCII code
 *
 * Return: 1 if lowercase else 0
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
	_putchar('\n');
}
