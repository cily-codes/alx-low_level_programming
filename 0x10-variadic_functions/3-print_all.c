#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - function that prints anything
 *
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	f_ti form_types[] = {
		{ "c", print_char },
		{ "i", print_integer },
		{ "f", print_float },
		{ "s", print_char_ptr }
	};
	unsigned int a = 0;
	unsigned int b = 0;
	char *separator = "";

	va_start(args, format);

	while (format != NULL && format[a])
	{
		b = 0;
		while (b < 4)
		{
			if (format[a] == *form_types[b].indicator)
			{
				form_types[b].p(separator, args);
				separator = ", ";
			}
			b++;
		}
		a++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_char - Prints a character of char type
 *
 * @separator: separator of the character
 * @args: variadic arguments
 *
 * Return: void
 */
void print_char(char *separator, va_list args)
{
	printf("%s%c", separator, va_arg(args, int));
}

/**
 * print_integer - Prints a character of int type
 *
 * @separator: separator of the character
 * @args: variadic arguments
 *
 * Return: void
 */
void print_integer(char *separator, va_list args)
{
	printf("%s%i", separator, va_arg(args, int));
}

/**
 * print_float - Prints a character of float type
 *
 * @separator: separator of the character
 * @args: variadic arguments
 *
 * Return: void
 */
void print_float(char *separator, va_list args)
{
	printf("%s%f", separator, va_arg(args, double));
}

/**
 * print_char_ptr - Prints the pointer to char type
 *
 * @separator: separator of the character
 * @args: variadic arguments
 *
 * Return: void
 */
void print_char_ptr(char *separator, va_list args)
{
	char *arg = va_arg(args, char *);

	if (arg == NULL)
	{
		printf("%s%s", separator, "(nil)");
		return;
	}

	printf("%s%s", separator, arg);
}
