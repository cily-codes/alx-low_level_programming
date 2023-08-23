#include "main.h"

/**
 * _isupper - shows if the output is uppercase
 *
 * @c: The character is in the ASCII Code
 *
 * Return: shows 1 if uppercase else 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
