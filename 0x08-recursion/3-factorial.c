#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 *
 * @n: factorial number to calculate
 *
 * Return: result of calculation
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
