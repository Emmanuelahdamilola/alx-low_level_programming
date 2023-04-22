#include <stdio.h>
/**
 * main - entry point
 * Description: 'a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line.'
 * Return: Always return 0
*/
int main(void)
{
	int i = 97;
	int n = 65;

	while (i <= 122)
	{
		putchar(i);
		i++;
	}
	while (n <= 90)
	{
		putchar(n);
		n++;
	}
	{
		putchar('\n');
	}
	return (0);
}
