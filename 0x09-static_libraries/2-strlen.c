#include "main.h"

/**
 * _strlen - length of a string
 * Description: a function that returns the length of a string.
 * @s: input string
 * Return: Return length
 *
*/
int _strlen(char *s)
{
	int leng;

	leng = 0;
	while (*s != '\0')
	{
		leng++;
		s++;
	}
	return (leng);
}
