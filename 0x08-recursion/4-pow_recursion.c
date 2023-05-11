#include "main.h"

/**
 * _pow_recursion - function that returns the
 * value of x raised to the power of y
 * @y: power number
 * @x: number to be raised
 * Return: return -1 if x is less than y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
