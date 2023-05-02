#include "main.h"
/**
 * rev_string -  reverses a string
 * Description: a function that reverses a string.
 * @s: input string
*/
void rev_string(char *s)
{
	char r = s[0];
	int ctr = 0;
	int x;

	while (s[ctr] != '\0')
		ctr++;
	for (x = 0; x < ctr; x++)
	{
		ctr--;
		r = s[x];
		s[x] = s[ctr];
		s[ctr] = r;
	}
}



