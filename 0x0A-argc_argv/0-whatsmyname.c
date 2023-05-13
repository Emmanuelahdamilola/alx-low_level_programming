#include "main.h"
#include <stdio.h>

/**
 * main - entry program that prints the name
 * @argv: array of arguments
 * @argc: number of arguments
 * Return: return 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
	(void)argc;

	return (0);
}
