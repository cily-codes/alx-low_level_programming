#include <unistd.h>
#include <stdio.h>

/**
 * _putchar - writes the character H to stdout
 * @H: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char H)
{
	return (write(1, &H, 1));
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char words[] = "_putchar";
	int length = sizeof(words) / sizeof(words[0]);
	int T;

	for (T = 0; length > T; T++)
	{
		_putchar(words[T]);
	}

	_putchar('\n');
	return (0);
}
