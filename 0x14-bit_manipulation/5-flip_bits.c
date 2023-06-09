#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would
 * need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int idx = 63, count = 0;
	unsigned long int c;
	unsigned long int xor = n ^ m;

	for (; idx >= 0; idx--)
	{
		c = xor >> idx;
		if (c & 1)
			count++;
	}

	return (count);
}
