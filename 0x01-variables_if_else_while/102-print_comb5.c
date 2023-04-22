#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first, last;

	for (first = 0; first <= 99; first++)
	{
		for (last = first; last <= 99; last++)
		{
			if (first == last)
			{
				continue;
			}
			if (first < last)
			{
				putchar(first / 10 + '0');
				putchar(first % 10 + '0');
				putchar(' ');
				putchar(last / 10 + '0');
				putchar(last % 10 + '0');
				if (first != 98 || last != 99)
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
