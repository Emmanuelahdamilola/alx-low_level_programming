#include "main.h"
/**
 * print_square - prints a square
 * Description: function that prints a square, followed by a new line.
 * @size: size of the square
 * Return: return void
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int m, n;

		for (m = 0; m < size; m++)
		{
			for (n = 0; n < size; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
