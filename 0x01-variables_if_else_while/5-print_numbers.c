#include <stdio.h>
/**
 * main - Entry point
 * Description: a program that prints all single digit numbers of
 * base 10 starting from 0,
 * followed by a new line.
 * Return: Always return 0
*/
int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}

