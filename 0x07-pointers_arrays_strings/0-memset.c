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
	int x = 0;

	while (n > 0)
	{
		s[x] = b;
		s[x]++;
		n--;
	}
	return (s);
}
