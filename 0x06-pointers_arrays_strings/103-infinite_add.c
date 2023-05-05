#include "main.h"

/**
 * *infinite_add - function that adds two numbers
 *
 * @n1: number to be added to n2
 * @n2: number to be added to n1
 *
 * @r: buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: a pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int tom, jerry;

	while (n1[tom] != '\0')
		tom++;
	while (n2[jerry] != '\0')
		jerry++;

	*r = *(r + size_r);
	while (n1[tom] > 0 || n1[jerry] > 0)
	{
		if (n1[tom] + n2[jerry] > 0)
			*r = n1[tom - 1] + n2[jerry - 1] + 1;
		else
			*r = n1[tom] + n2[jerry];
		tom--;
		jerry--;
	}
	return (r);
}
