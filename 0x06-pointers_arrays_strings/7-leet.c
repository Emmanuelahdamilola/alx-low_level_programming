#include "main.h"
/**
 * leet - encodes a string into 1337
 * @n: integer
 * Return: pointer to value
 *
*/
char *leet(char *n)
{
	int m, x;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (m = 0; n[m] != '\0'; m++)
	{
		for (x = 0; x < 10; x++)
		{
			if (n[m] == s1[x])
			{
				n[m] = s2[x];
			}
		}
	}
	return (n);
}

