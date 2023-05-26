#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 *
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int a = 0;

	if (n > 0)
	{
		va_start(args, n);

		while (a < n)
		{
			printf("%d", va_arg(args, int));

			if (a != n - 1  && separator != NULL)
			{
				printf("%s", separator);
			}
			a++;
		}
		va_end(args);
	}
	printf("\n");
}
