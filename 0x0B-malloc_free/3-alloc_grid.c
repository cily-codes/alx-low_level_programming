#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a
 * 2 dimensional array of integers
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int **a, b, c;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	a = (int **) malloc(height * sizeof(int *));
	if (a == NULL)
	{
		return (NULL);
	}
	for (b = 0; b < height; b++)
	{
		a[b] = (int *) malloc(width * sizeof(int));
		if (a[b] == NULL)
		{
			free(a);
			for (c = 0; c <= b; c++)
			{
				free(a[c]);
			}
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
		{
			a[b][c] = 0;
		}
	}
	return (a);
}
