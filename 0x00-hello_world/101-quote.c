#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * main - Entry point
 * program that write exactly: and that piece of art is useful"
 * - Dora Korpar, 2015-10-19,
 * followed by a new line, to the standard error.
 * Return: Returns 1 (Failure)
 */
int main(void)
{
	char Art[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDOUT_FILENO, Art, sizeof(Art) - 1);

	return (1);
}
