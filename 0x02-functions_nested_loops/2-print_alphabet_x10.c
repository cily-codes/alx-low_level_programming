#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	char repeat;
	char lower_alphabet;

	for (repeat = 1; repeat <= 10; repeat++)
	{
		for (lower_alphabet = 97; lower_alphabet <= 122; lower_alphabet++)
		{
			putchar(lower_alphabet);
		}
		putchar('\n');
	}
}
