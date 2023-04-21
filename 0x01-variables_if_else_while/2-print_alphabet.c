#include <stdio.h>
/**
 * main - Entry point
 * Description: 'a program that prints the alphabet in lowercase,
 * followed by a new line.'
 * Return: always return 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int n;

	for (n = 0; n < 26; n++)
	{
		putchar(alpha[n]);
	}
	{
		putchar('\n');
	}
	return (0);
}
