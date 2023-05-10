#include "main.h"

int p_check(int n, int a);

/**
 * is_prime_number -  returns if a number is prime
 *
 * @n: the number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (p_check(n, 2));
}

/**
 * p_check - check if a number is prime
 *
 * @n: the number to check
 * @a: to check n against
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int p_check(int n, int a)
{
	if (a * a > n)
	{
		return (1);
	}
	else if (n % a == 0)
	{
		return (0);
	}
	else
	{
		return (p_check(n, a + 1));
	}
}
