#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	const char *str = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDERR_FILENO, str, 59);
	return 1;
}
