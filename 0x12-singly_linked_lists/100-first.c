#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - attribute that specifies what comes before the main function
 *
 * Return: void
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
