#include "main.h"
/**
 * puts_half - prints half of a string
 * Description: a function that prints half of a string,
 * followed by a new line.
 * @str: string
*/
void puts_half(char *str)
{
	int m, a, l;

	l = 0;
	for (m = 0; str[m] != '\0'; m++)
		l++;
	a = (l / 2);

	if ((l % 2) == 1)
		a = ((l + 1) / 2);

	for (m = a; str[m] != '\0'; m++)
		_putchar(str[m]);
	_putchar('\n');
}

