#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program that adds positive numbers
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int a, b, adds = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		adds += atoi(argv[a]);
	}

	printf("%d\n", adds);

	return (0);
}
