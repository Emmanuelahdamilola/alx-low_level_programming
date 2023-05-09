#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char.
 * @s:pointer
 * @to:character pointed to
 * Return: returns void
*/
void set_string(char **s, char *to)
{
	*s = to;
}
