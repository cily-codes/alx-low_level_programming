#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastDigit = n % 10;

	printf("Last digit of %d is %d and ", n, lastDigit);
	if (lastDigit > 5)
		printf("is greater than 5\n", n);
	else if (lastDigit == 0)
		printf("is 0\n", n);
	else
		printf("is less than 6 and not 0\n", n);
	return (0);
}
