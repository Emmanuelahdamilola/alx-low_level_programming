#include "main.h"
/**
 * _isupper - show 1 if the input is a
 * uppercase character. the rest in cases, show 0
 * @c: uses a character in ASCII code
 * Return: return 1 for uppercase c, and 0 for the rest
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
