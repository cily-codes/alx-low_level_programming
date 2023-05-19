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
	int *mem, a;

	if (min > max)
	{
		return (NULL);
	}
	mem = malloc(sizeof(int) * (max - min + 1));
	if (mem != NULL)
	{
		for (a = 0; a < (max - min + 1); a++)
		{
			mem[a] = min++;
		}
		return (mem);
	}
	else
	{
		return (NULL);
	}
}
