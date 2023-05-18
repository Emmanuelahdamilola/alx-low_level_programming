#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: returns pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *conc;
	unsigned int length1, length2, length, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (length1 = 0; s1[length1] != '\0'; length1++)
		;

	for (length2 = 0; s2[length2] != '\0'; length2++)
		;

	if (n > length2)
		n = length2;

	length = length1 + n;

	conc = malloc(length + 1);

	if (conc == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		if (i < length1)
			conc[i] = s1[i];
		else
			conc[i] = s2[i - length1];

	conc[i] = '\0';

	return (conc);
}

