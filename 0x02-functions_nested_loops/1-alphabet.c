#include "main.h"

/**
 *print_alphabet - print alphabet
 *Descrition: a function that prints the alphabet, in lowercase,
 * followed by a new line.
 * Return: Always return void
*/
void print_alphabet(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
