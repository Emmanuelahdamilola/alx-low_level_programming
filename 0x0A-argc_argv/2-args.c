#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program and prints
 * all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: returns 0 (Success)
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}

