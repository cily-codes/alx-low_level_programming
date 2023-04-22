#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int game, boy;

	for (game = 0; game < 10; game++)
	{
		for (boy = game; boy < 10; boy++)
		{
			putchar(game + '0');
			putchar(',');
			putchar(' ');
			putchar(boy + '0');
			if (game == 9 && boy == 9)
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
