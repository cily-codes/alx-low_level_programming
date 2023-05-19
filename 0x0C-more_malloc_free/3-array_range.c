#include "main.h"
#include <stdlib.h>

/**
 * *array_range - function that creates an array of integers
 *
 * @min: minimum number
 * @max: maximum number
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *mem, a, b = 0;

	if (min > max)
	{
		return (NULL);
	}
	mem = malloc(sizeof(*mem) * ((max - min) + 1));
	if (mem != NULL)
	{
		for (a = min; a <= max; a++)
		{
			mem[b] = a;
			b++;
		}
		return (mem);
	}
	else
	{
		return (NULL);
	}
}
