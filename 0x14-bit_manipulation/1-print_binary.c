#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number for which we want to print the * binary representation
 */
void print_binary(unsigned long int n)
{
	int idx = 63, count = 0;
	unsigned long int c;

	for (; idx >= 0; idx--)
	{
		c = n >> idx;

		if (c & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

