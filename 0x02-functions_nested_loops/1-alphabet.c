#include "main.h"
#include <stdio.h>

/**
 * print_alphabet  - Prints the alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char lower_alphabet;

	for (lower_alphabet = 'a'; lower_alphabet <= 'z'; lower_alphabet++)
	{
		putchar(lower_alphabet);
	}
	putchar('\n');
}
