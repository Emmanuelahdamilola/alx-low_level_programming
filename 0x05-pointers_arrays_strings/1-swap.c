#include "main.h"
/**
 * swap_int - swaps the values
 * Description: a function that swaps the values of two integers.
 * @a: swaps integer
 * @b: swaps integer
 * Return: Always 0
 *
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
