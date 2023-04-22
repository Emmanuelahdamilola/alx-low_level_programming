#include <stdio.h>
/**
 * main - Entry point
 * Description: 'a program that prints all possible combinations
 * of single-digit numbers.'
 * Return: Always return 0
*/
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
