#include "main.h"

int res_sqrt_recursion(int n, int index);


/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number.
 * @n: square number
 * Return: return -1 if the n does not have natural
 * square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (res_sqrt_recursion(n, 0));
}

/**
 * res_sqrt_recursion - actual square root recursion
 * @n: square number
 * @index:to be squared
 * Return: return 0
 */

int res_sqrt_recursion(int n, int index)
{
	if (index * index > n)
		return (-1);

	if (index * index == n)
		return (index);
	return (res_sqrt_recursion(n, index + 1));
}
