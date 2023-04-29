#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: the expected result
 */
int main(void)
{
	long p = 612852475143;
	int e = 2;

	while (e * e <= p)
	{
		if (p % e == 0)
		{
			p /= e;
		}
		else
		{
			e++;
		}
	}
	printf("%ld\n", p);
	return (0);
}
