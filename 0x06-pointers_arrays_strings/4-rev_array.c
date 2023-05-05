#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverses the content of an array of integers
 *
 * @a: An array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int *front = a;
	int *back = a + n - 1;
	int start;

	while (front < back)
	{
		start = *front;
		*front = *back;
		*back = start;
		front++;
		back--;
	}
}
