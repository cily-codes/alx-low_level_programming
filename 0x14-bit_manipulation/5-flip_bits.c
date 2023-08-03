#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit_diff;
	unsigned int find = 0;

	bit_diff = n ^ m;
	while (bit_diff != 0)
	{
		find += bit_diff & 1;
		bit_diff >>= 1;
	}
	return (find);
}
