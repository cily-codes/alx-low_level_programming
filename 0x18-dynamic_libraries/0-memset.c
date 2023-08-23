#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte
 *
 * @s: memeory area
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}

	return (s);
}
