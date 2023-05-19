#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - function that allocates memory for an array
 *
 * @nmemb: number of elements
 * @size: size to be allocated
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc(nmemb * size);
	if (mem == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < (nmemb * size); a++)
	{
		mem[a] = 0;
	}
	return (mem);
}
