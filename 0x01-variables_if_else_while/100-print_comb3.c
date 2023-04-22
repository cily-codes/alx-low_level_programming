#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int alx, angel;

	for (alx = 0; alx < 9; alx++)
	{
		for (angel = alx + 1; angel < 10; angel++)
		{
			putchar(alx + '0');
			putchar(angel + '0');
			if (alx < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
