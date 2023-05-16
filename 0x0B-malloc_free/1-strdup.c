#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string pointer
 * Return: Returns NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	s = malloc((i + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		s[len] = str[len];
	return (s);
}
