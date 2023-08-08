#include "main.h"

/**
 * create_file - function that creates a file.
 *
 * @filename: name of the file to create
 * @text_content:  is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int file;
	size_t len = 0;
	size_t b_w;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		b_w = write(file, text_content, len);
		close(file);

		if (b_w == -1)
			return (-1);
	}
	else
	{
		close(file);
	}
	return (1);
}
