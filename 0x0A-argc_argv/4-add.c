#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * check_num - check - string there are digit
 * @str: array string
 * Return: Always 0 (Success)
 */
int check_num(char *str)
{
	unsigned int cnt;

	cnt = 0;
	while (cnt < strlen(str))

	{
		if (!isdigit(str[cnt]))
		{
			return (0);
		}

		cnt++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])

{
	int c;
	int str_to_int;
	int add = 0;

	c = 1;
	while (c < argc)
	{
		if (check_num(argv[c]))

		{
			str_to_int = atoi(argv[c]);
			add += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		c++;
	}

	printf("%d\n", add);

	return (0);
}
