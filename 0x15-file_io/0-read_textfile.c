#include "main.h"

/**
 * read_textfile - function that reads a text file and
 *		prints it to the POSIX standard output
 * @filename: pointer: shows to the name of the file.
 * @letters: letters is the number of letters
 *		it should read and print
 * Return:returns the actual number of letters it could read and print
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t w_cnt;
	ssize_t w_r;
	char *buffer;

	if (filename == NULL)
		return (0);

	f_filed = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	w_r = read(file, buffer, letters);

	if (w_r == -1)
		return (0);

	w_cnt = write(STDOUT_FILENO, buffer, w_r);

	if (w_cnt == -1 || w_r != w_cnt)
		return (0);

	free(buffer);
	close(file);
	return (w_cnt);

}
