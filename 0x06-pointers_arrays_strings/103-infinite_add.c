#include "main.h"
/**
 * infinite_add - adds two numbers.
 * Description: function that adds two numbers.
 * @n1: string value
 * @n2: string value
 * @r: string value
 * @size_r:input integer
 * Return: Always return 0
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ovrflw = 0, x = 0, y = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;
	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || ovrflw == 1)
	{
		if (x < 0)
			val1 = 0;
		else
			val1 = *(n1 + x) - '0';
		if (y < 0)
			val2 = 0;
		else
			val2 = *(n2 + y) - '0';
		temp_tot = val1 + val2 + ovrflw;
		if (temp_tot >= 10)
			ovrflw = 1;
		else
			ovrflw = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		y--;
		x--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

