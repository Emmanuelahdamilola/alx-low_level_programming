#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * Description: a function that convert a string to an integer.
 * @s: string
 * Return: always 0
 *
*/
int _atoi(char *s)
{
	int a = 0;
	unsigned int pi = 0;
	int mi = 1;
	int si = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			mi *= -1;
		}
	while (s[a] >= 48 && s[a] <= 57)
	{
		si = 1;
		pi = (pi * 10) + (s[a] - '0');
		a++;
	}
	if (si == 1)
	{
		break;
	}
	a++;
	}
	pi *= mi;
	return (pi);
}
