#include <stdlib.h>
#include <stdio.h>

/**
* main - print the opcodes of this program
* @argc: number of argument
* @argv: array of argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	int bytes;
	int i = 0;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	while (i < bytes)
	{
		i++;
		if (i == bytes - 1)
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

