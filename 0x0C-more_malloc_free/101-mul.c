#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * non_digit - checks if a string contains a non-digit char
 * @s: string to be evaluated
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int non_digit(char *s)
{
	int a = 0;
	while (s[a])
	{
		if (s[a] < '0' || s[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * err - handles errors for main
 */
void err(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int len1, len2, len, i, mem, mul1, mul2, *product, a = 0;

	num1 = argv[1];
	num2 = argv[2];

	if (argc != 3 || !non_digit(num1) || !non_digit(num2))
		err();

	len1 = _strlen(num1);
	len2 = _strlen(num2);
	len = len1 + len2 + 1;

	product = malloc(sizeof(int) * len);
	if (!product)
		return (1);

	for (i = 0; i <= len1 + len2; i++)
		product[i] = 0;

	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		mul1 = num1[len1] - '0';
		mem = 0;
		for (len2 = _strlen(num2) - 1; len2 >= 0; len2--)
		{
			mul2 = num2[len2] - '0';
			mem += product[len1 + len2 + 1] + (mul1 * mul2);
			product[len1 + len2 + 1] = mem % 10;
			mem /= 10;
		}
		if (mem > 0)
			product[len1 + len2 + 1] += mem;
	}

	for (i = 0; i < len - 1; i++)
	{
		if (product[i])
			a = 1;
		if (a)
			_putchar(product[i] + '0');
	}

	if (!a)
		_putchar('0');

	_putchar('\n');

	free(product);
	return (0);
}
