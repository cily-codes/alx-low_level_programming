#include "main.h"

/**
 * _atoi - converts string to integers
 *
 * @s: to be coverted
 *
 * Return: an integers
 */
int _atoi(char *s)
{
	int H = 0;
	unsigned int E = 0;
	int L = 1;
	int P = 0;

	while (s[H])
	{
		if (s[H] == 45)
		{
			L *= -1;
		}

		while (s[H] >= 48 && s[H] <= 57)
		{
			P = 1;
			E = (E * 10) + (s[H] - '0');
			H++;
		}

		if (P == 1)
		{
			break;
		}

		H++;
	}

	E *= L;
	return (E);
}
