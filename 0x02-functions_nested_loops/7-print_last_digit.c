#include "main.h"

/**
  * print_last_digit - Prints the last digit of a number
  *
  * @n: The number to print
  *
  * Return: Value of the last digit
  */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;

	if (lastDigit < 0)
	{
		lastDigit = lastDigit * -1;
	}

	_putchar(lastDigit + '0');

	return (lastDigit);
}
