#include "main.h"
/**
 *print_last_digit - print the last digit of a number
 *@int: input the integer
 * Return: return the value of the number
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
	{
		_putchar(-i + 48);
		return (-i);
	}
	else
	{
	_putchar(i + 48);
	return (i);
	}
}
