#include "main.h"
/**
 * print_rev - prints a string in reverse
 *
 * @s: string to be printed in reverse
 *
 * Return: String in reverse
 */
void print_rev(char *s)
{
	if (*s == '\0')
		return;

	print_rev(s + 1);
	_putchar(*s);

	if (*(s + 1) == '\0')
		_putchar('\n');
}
