#include "main.h"

/**
  * print_most_numbers - Print the numbers from 0-9 except 2&4.
  *
  * Return: all requested numbers except 2&4
  */
void print_most_numbers(void)
{
	int l;

	for (l = 0; l <= 9; l++)
	{
		if (l != 2 && l != 4)
		{
			_putchar(l + '0');
		}
	}
	_putchar('\n');
}
