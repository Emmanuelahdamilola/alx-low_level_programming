#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int idx = 1;
	char *c;

	c = (char *) &idx;

	return ((int)*c);
}

