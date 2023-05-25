#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array
 *
 * @array: pointer to the array
 * @size: size of the array
 * @action: pointer to the function you need to use
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
