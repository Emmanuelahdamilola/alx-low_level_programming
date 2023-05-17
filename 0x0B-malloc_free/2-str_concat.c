#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: string to be concanated
 * @s2: string to be concanated
 * Return: if function fails return NULL,
 * if NULL is passed treat it as empty string
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, length1, length2, length;
	char *rest;

	length1 = length2 = 0;
	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			length1++;
	}
	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			length2++;
	}
	length = length1 + length2;
	rest = (char *)malloc(sizeof(char) * (length + 1));
	if (rest == NULL)
		return (NULL);
	for (i = 0; i < length1; i++)
		rest[i] = s1[i];
	for (k = 0; k < length2; k++, i++)
		rest[i] = s2[k];
	rest[length] = '\0';
	return (rest);
}
