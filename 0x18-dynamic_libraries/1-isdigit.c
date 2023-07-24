#include "main.h"
/**
 * _isdigit -  checks for a digit
 * @c: input an integer
 * Return: Returns 1 if c is a digit, returns 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
