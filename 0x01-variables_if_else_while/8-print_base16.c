#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa < 10; hexa++)
	{
		putchar(hexa + '0');
	}
	for (hexa = 0; hexa < 6; hexa++)
	{
		putchar(hexa + 'a');
	}
	putchar('\n');
	return (0);
}
