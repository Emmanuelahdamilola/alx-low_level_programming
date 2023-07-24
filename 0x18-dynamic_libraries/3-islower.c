#include "main.h"
/**
 * _islower - show 1 if the input is a
 * lowercase character. the rest in cases, show 0
 * @c: uses a character in ASCII code
 * Return: return 1 for lowercase c, and 0 for the rest
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
