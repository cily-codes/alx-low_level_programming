#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *malloc_checked - function that allocates memory using malloc
 *
 * @b: the size to allocate
 *
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem;

	mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
