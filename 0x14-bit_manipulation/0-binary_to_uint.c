#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: a pointer to a string of characters representing a binary number
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		res = (res << 1) + (*b - '0');
	}
	return (res);
}
