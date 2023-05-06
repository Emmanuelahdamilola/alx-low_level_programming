#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer.
 * Description: function that prints a buffer.
 * @b: string value
 * @size: size of value
 * Return: Always return 0
*/
void print_buffer(char *b, int size)
{
	int o, j, m;

	o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (o < size)
	{
		j = size - o < 10 ? size - o : 10;
		printf("%08x: ", o);
		for (m = 0; m < 10; m++)
		{
			if (m < j)
				printf("%02x", *(b + o + m));
			else
				printf("  ");
			if (m % 2)
			{
				printf(" ");
			}
		}
		for (m = 0; m < j; m++)
		{
			int c = *(b + o + m);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		o += 10;
	}
}

