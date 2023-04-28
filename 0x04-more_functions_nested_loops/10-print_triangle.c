#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: return void
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, k;

		for (i = 1; i <= size; i++)
		{
			for (k = i; k < size; k++)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

