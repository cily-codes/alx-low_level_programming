#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals
 *
 * @a: matrix of integers
 * @size: size of
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int g, diag1 = 0, diag2 = 0;

	for (g = 0; g < size; g++)
	{
		diag1 += a[(size + 1) * g];
		diag2 += a[(size - 1) * (g + 1)];
	}

	printf("%d, %d\n", diag1, diag2);
}
