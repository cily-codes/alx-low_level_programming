#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int reverse;

	for (reverse = 'z'; reverse >= 'a'; reverse++)
	{
		putchar(reverse);
	}
	putchar('\n');
	return (0);
}
