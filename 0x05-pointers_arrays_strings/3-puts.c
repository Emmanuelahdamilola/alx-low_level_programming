#include "main.h"
/**
 * _puts - prints a string
 * Description: a function that prints a string
 * followed by a new line, to stdout.
 * @str: string
 * Return: nothing
*/
void _puts(char *str)
{
	for (*str != '\0'; str++;)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
