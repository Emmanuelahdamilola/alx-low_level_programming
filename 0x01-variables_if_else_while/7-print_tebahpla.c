#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Always return 0
*/
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
