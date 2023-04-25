#include "main.h"
/**
 * _isalpha - show 1 if the input is
 * a letter character , and show 0 if otherwise
 * @c: uses the character in ASCII code
 * Return: 1 for letter caharcter, 0 for otherwise
*/
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
