#include "main.h"
/**
 * int _islower(int c) - check for lower characters
 * Description: a function that checks for lowercase character.
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
