#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed in reverse
 *
 * Return: String in reverse
 */
void print_rev(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}

	for (r -= 1; r >= 0; r--)
	{
		_putchar(s[r]);
	}
	_putchar('\n');
}
