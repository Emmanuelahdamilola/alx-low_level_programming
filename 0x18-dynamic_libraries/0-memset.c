#include "main.h"

/**
 * _memset - fills memory
 * Description: function that fills memory with a constant byte.
 * @s: pointer
 * @b: constant value
 * @n: integer value
 * Return: Return pointer
 *
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
