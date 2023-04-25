#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 times
 * Description: a function that prints 10 times the alphabet, in lowercase,
 * followed by a new line.
 * Return: return void
*/
void print_alphabet_x10(void)
{
	char i;
	int a = 0;

	while (a <= 9)
	{
		for (i = 97; i <= 122; i++)
		{
		_putchar(i);
		}
		_putchar('\n');
		a++;
	}
}
