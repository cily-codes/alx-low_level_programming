#include "main.h"
#include <stdio.h>

int _sqrt(int n, int a);

/**
 * _sqrt_recursion - prints the natural square root of a number
 *
 * @n: natural square root to calculate
 *
 * Return: natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - calculates natural square root
 *
 * @n: natural square root to calculate
 * @a: recursive number
 *
 * Return: the natural square root
 */

int _sqrt(int n, int a)
{
	int sqrt = a * a;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (a);
	}
	else
	{
		return (_sqrt(n, a + 1));
	}
}
