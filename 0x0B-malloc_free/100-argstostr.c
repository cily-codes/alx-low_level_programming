#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: Concatenated argument
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int a = 0, b = 0, c = 0, d = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < ac; a++)
	{
		d += strlen(av[a]);
		d++;
	}
	string = malloc((d + 1) * sizeof(char));
	if (string == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
		{
			string[c] = av[a][b];
			c++;
		}
		string[c] = '\n';
		c++;
	}
	string[c] = '\0';
	return (string);
}
