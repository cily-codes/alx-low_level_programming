#include <stdio.h>

/**
  * main - Prints the first 50 fibonacci numbers, from 1 and 2
  *
  * Return: Always 0
  */

int main(void)
{
	int l = 0;
	long m = 1, n = 2;

	while (l < 50)
	{
		if (l == 0)
			printf("%ld", m);
		else if (l == 1)
			printf(", %ld", n);
		else
		{
			n += m;
			m = n - m;
			printf(", %ld", n);
		}

		++l;
	}

	printf("\n");
	return (0);
}
