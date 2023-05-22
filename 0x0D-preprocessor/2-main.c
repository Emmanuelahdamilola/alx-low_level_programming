#include <stdio.h>

/**
 * main - Entry of the program
 * Description: rogram that prints the name of the file it was compiled from
 * Return: Always return 0 (Success)
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
