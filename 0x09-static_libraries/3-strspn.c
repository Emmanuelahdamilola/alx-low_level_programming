#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: searched string
 * @accept: measured prefix
 * Return:: Returns the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int b;
int i;

b = 0;
while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
b++;
break;
}
else if (accept[i + 1] == '\0')
return (b);
}
s++;
}
return (b);
}
