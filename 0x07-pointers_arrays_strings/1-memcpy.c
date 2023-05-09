#include "main.h"

/**
 * _memcpy - copies memory
 * Description: function that copies memory area.
 * @dest: pointer
 * @src: pointer
 * @n: integer input
 * Return: Return pointer dest
 *
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j = n;

	for (i = 0; i < j; i++)
	{
		i++;
	dest[i] = src[i];
	n--;
	}
	return (dest);
}
