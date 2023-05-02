#include "main.h"
/**
 * puts2 - prints every other character of a string
 * Description: a function that prints every other
 * character of a string, starting with the first character,
 * followed by a new line.
 * @str: string
*/
void puts2(char *str)
{
	int lng = 0;
	int i = 0;
	char *j = str;
	int x;

	while (*j != '\0')
	{
		j++;
		lng++;
	}
	i = lng - 1;
	for (x = 0 ; x <= i ; x++)
	{
		if (x % 2 == 0)
	{
		_putchar(str[x]);
	}
	}
	_putchar('\n');
}



