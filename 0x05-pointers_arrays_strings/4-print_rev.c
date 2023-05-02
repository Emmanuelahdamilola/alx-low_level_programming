#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * Description:a function that prints a string,
 * in reverse, followed by a new line.
 * @s: input  string
*/
void print_rev(char *s)
{
	int leng = 0;
	int i;

	while (*s != '\0')
	{
		leng++;
		s++;
	}
	s--;
	for (i = leng; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}

