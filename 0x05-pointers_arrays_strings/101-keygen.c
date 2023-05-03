#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 6


/**
 * main - create password
 *
 * Return: void
 */
int main(void)
{
	int i;
	char password[PASSWORD_LENGTH + 1];

	srand(time(NULL));

	for (i = 0; i < PASSWORD_LENGTH; i++)
	{
		password[i] = rand() % 58 + 'A';

		if (password[i] > 'Z' && password[i] < 'a')
		{
			i--;
			continue;
		}
	}

	password[PASSWORD_LENGTH] = '\0';
	printf("Generated password: %s\n", password);
	return (0);
}
