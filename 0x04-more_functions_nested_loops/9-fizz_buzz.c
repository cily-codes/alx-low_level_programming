#include "main.h"
#include <stdio.h>

/**
 * main - prints a FizzBuzz Program
 *
 * Return: 0
 */
int main(void)
{
	int l;

	for (l = 1; l <= 100; l++)
	{
		if ((l % 3 == 0) && (l % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (l % 3 == 0)
		{
			printf("Fizz");
		}
		else if (l % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", l);
		}

		if (l != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
