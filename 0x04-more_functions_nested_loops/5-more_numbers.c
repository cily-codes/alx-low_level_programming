#include "main.h"

/**
 * more_numbers - print number from 0-14 x10
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int rep;
	int l;

	for (rep = 1; rep <= 10; rep++)
	{
		for (l = 0; l <= 14; l++)
		{
			if (l >= 10)
			{
				_putchar((l / 10) + '0');
			}
			_putchar((l % 10) + '0');
		}
		_putchar('\n');
	}
}
