#include "main.h"
/**
* print_times_table - prints the n times table, starting with 0
* @n: number of the times table
*/
void print_times_table(int n)
{
	int dig, mult, pro;

	if (n >= 0 && n <= 15)
	{
	for (dig = 0; dig <= n; dig++)
	{
	_putchar('0');
	for (mult = 1; mult <= n; mult++)
	{
	_putchar(',');
	_putchar(' ');
	pro = dig * mult;
	if (pro <= 99)
	_putchar(' ');
	if (pro <= 9)
	_putchar(' ');
	if (pro >= 100)
	{
	_putchar((pro / 100) + '0');
	_putchar(((pro / 10)) % 10 + '0');
	}
	else if (pro <= 99 && pro >= 10)
	{
	_putchar((pro / 10) + '0');
	}
	_putchar((pro % 10) + '0');
	}
	_putchar('\n');
	}
	}
}
