#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: the NULL terminated string to
 * add at the end of the file
 * Return: 1 on success and -1 on failure
 * If filename is NULL return -1,
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_data, wrt, str_length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[str_length])
			str_length++;
	}

	file_data = open(filename, O_WRONLY | O_APPEND);
	wrt = write(file_data, text_content, str_length);

	if (file_data == -1 || wrt == -1)
		return (-1);

	close(file_data);

	return (1);

}
