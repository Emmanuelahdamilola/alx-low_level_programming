#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: converted string
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, l, f, dit;

	i = 0;
	d = 0;
	n = 0;
	l = 0;
	f = 0;
	dit = 0;

	while (s[l] != '\0')
		l++;

	while (i < l && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dit = s[i] - '0';
			if (d % 2)
				dit = -dit;
			n = n * 10 + dit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * main - function that multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = _atoi(argv[1]);
	n2 = _atoi(argv[2]);
	res = n1 * n2;

	printf("%d\n", res);

	return (0);
}

