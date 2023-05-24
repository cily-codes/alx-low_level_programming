#include "function_pointers.h"

/**
 * print_name - function that prints a name
 *
 * @name: name to print out
 * @f: function to pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
