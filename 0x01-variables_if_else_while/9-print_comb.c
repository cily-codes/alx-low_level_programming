#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int game = 0;

	for (game = 0; game < 10; game++)
	{
		putchar (game + '0');
		if (game != 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar ('\n');
		}
	}
	return (0);
}
