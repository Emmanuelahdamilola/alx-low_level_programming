#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * Description: a function that prints n elements of an array
 * of integers, followed by a new line
 * @a: input integer
 * @n: input integer
*/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", a[c]);
	}
		if (c == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
