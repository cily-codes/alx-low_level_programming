#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base;

	for (base = 0; base < 10; base++)
	{
		putchar(base + '0');
	}
	putchar('\n');
	return (0);
}
