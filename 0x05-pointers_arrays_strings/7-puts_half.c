#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int f;
	int len = 0;
	int start;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2 + 1;
	}

	for (f = start; f < len; f++)
	{
		_putchar(str[f]);
	}
	_putchar('\n');
}
