#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: the name of the file to create
 * @text_content:  a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”
 * if the file already exists, truncate it
 * if filename is NULL return -1
 * if text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int file_data, wrt, str_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[str_length])
			str_length++;
	}

	file_data = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(file_data, text_content, str_length);

	if (file_data == -1 || wrt == -1)
		return (-1);

	close(file_data);

	return (1);

}
