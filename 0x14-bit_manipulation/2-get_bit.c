#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 *
 * @n: number to find the index
 * @index: index to find
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int find = 0;

	while (n)
	{
		if (find == index)
		{
			if (n % 2)
			{
				return (1);
			}
			else
			{
				return (0);
			}
		}
		n = n / 2;
		find++;
	}

	if (index > find && index < 63)
	{
		return (0);
	}

	return (-1);
}
