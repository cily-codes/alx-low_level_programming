#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that multiplies two numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, product = 1;

	if (argc > 1)
	{
		for (a = 1; a < argc; a++)
		{
			product *= atoi(argv[a]);
		}
		printf("%d\n", product);
	}

	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
