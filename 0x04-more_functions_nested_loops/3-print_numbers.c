#include "main.h"

/**
 * print_numbers - prints the numbers from '0' to '9'
 *
 * Return: requested data followed by new line
 */
void print_numbers(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		_putchar(l + '0');
	}

	_putchar('\n');
}
