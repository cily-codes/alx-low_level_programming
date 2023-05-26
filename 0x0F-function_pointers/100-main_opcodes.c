#include <stdio.h>
#include <stdlib.h>

/**
 * opcodes - program that prints the opcodes of its own main function
 *
 * @a: pointer to main function
 * @n: number of bytes to print
 *
 * Return: void
 */
void opcodes(char *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%.2hhx", a[b]);
		if (b < n - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
}

/**
 * main - prints the opcodes of its own function
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char **argv)
{
	int v;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	v = atoi(argv[1]);

	if (v < 0)
	{
		printf("Error\n");
		exit(2);
	}

	opcodes((char *)&main, v);
	return (0);
}
