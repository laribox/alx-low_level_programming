#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content:  NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	const char *file_name = filename;
	char *text_c = text_content;
	int i;
	int j;
	int len = 0;

	if (file_name == NULL)
		return (-1);

	if (text_c != NULL)
	{
		for (len = 0; text_c[len];)
			len++;
	}

	i = open(file_name, O_WRONLY | O_APPEND);
	j = write(i, text_c, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
