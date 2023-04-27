#include <stdio.h>

/**
  * main - Prints the sum of all the multiples of 3 or 5 below 1024
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int c, b = 0;

	while (c < 1024)
	{
		if ((c % 3 == 0) || (c % 5 == 0))
		{
			b += c;
		}

		c++;
	}

	printf("%d\n", b);
	return (0);
}
