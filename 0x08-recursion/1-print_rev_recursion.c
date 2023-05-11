#include "main.h"

/**
 * _print_rev_recursion - function that prints a string in reverse.
 * @s:string
 * Return: return void
 */
void _print_rev_recursion(char *s)
{
	int index = 0;
	char st[100];

	if (*s)
	{
		_print_rev_recursion(s + 1);
		st(index++) = *s;
	}
	return (st);
}
