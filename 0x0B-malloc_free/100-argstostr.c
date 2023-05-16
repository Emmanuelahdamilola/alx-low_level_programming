#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that conatenates all the arguments of your program.
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int a, b, x = 0, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}
	len += ac;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
	for (b = 0; av[a][b]; b++)
	{
		s[x] = av[x][b];
		x++;
	}
	if (s[x] == '\0')
	{
		s[x++] = '\n';
	}
	}
	return (s);
}
