#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned long int.
 * @index: specifying the index of the bit we want to set to 0.
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	if (*n & mask)
		*n ^= mask;

	return (1);
}

