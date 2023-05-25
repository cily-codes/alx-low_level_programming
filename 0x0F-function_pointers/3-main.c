#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry Point
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int (*opera)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opera = get_op_func(argv[2]);

	if (!opera)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opera(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
