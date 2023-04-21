#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numero;

	for (numero = 0; numero < 10; numero++)
	{
		putchar(numero + '0');
	}
	putchar('\n');
	return 0;
}
