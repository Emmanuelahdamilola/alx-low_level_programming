#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a: array of the integer
 * @size: size of the interger
 * Return: return 0
 *
*/
void print_diagsums(int *a, int size)
{
	int i, n1, n2;

	n1 = 0;
	n2 = 0;
	for (i = 0; i < size; i++)
	{
		n1 += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		n2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", n1, n2);
}
