#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output.
 * @filename: parameter to be checked
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print,
 * if the file can not be opened or read, return 0,
 * if filename is NULL return 0,
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t file_data;
	ssize_t wrt;
	ssize_t t;

	file_data = open(filename, O_RDONLY);
	if (file_data == -1)
		return (0);

	b = malloc(sizeof(char) * letters);
	t = read(file_data, b, letters);
	wrt = write(STDOUT_FILENO, b, t);

	free(b);
	close(file_data);
	return (wrt);
}


