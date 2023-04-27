#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9
 * Description: 'a program that prints the alphabet in lowercase,
 * followed by a new line.'
 * Return: Always return void
*/
void print_most_numbers(void)
{
	int i = 48;

	while (i <= 58)
	{
		if (i == 50 || i == 52)
		{
			i++;
			continue;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
