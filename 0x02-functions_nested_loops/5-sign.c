#include "main.h"
/**
 * print_sign - determines if the number is
 * less than, equal to or greater than 0
 * @n: the input is an integer
 * Return: 1 for greater  than 0, 0 for zero and -1 for less than
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}

