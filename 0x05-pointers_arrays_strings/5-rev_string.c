#include "main.h"

/**
 * rev_string - reverse the string
 *
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int b, v = 0, n;
	char *a, rev;

	a = s;

	while (s[v] != '\0')
	{
		v++;
	}

	for (n = 1; n < v; n++)
	{
		a++;
	}

	for (b = 0; b < (v / 2); b++)
	{
		rev = s[b];
		s[b] = *a;
		*a = rev;
		a--;
	}
}
