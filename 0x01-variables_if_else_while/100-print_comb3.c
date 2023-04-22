#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charlie, angel;

	for (charlie = 0; charlie < 9; charlie++)
	{
		for (angel = charlie + 1; angel < 10; angel++)
		{
			putchar(charlie + '0');
			putchar(angel + '0');
			if (charlie < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
