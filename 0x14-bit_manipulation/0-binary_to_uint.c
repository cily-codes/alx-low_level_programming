#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: the binary string to be converted
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;
	size_t a = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}

		sum = (sum * 2) + (b[a] - '0');
		a++;
	}
	return (sum);
}
