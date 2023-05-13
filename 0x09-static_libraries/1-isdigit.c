#include "main.h"

/**
 * _isdigit - shows if the output is digit
 *
 * @c: The character is in the ASCII Code
 *
 * Return: shows 1 if it's a digit else 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
