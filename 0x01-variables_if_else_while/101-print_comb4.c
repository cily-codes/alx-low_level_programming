#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int fa, so, la;

	for (fa = 0; fa <= 7; fa++)
	{
		for (so = fa + 1; so <= 8; so++)
		{
			for (la = so + 1; la <= 9; la++)
			{
				putchar(fa + '0');
				putchar(so + '0');
				putchar(la + '0');
				if (fa != 7 || so != 8 || la != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
