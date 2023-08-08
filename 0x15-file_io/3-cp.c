#include "main.h"

char *c_buffer(char *file);
void close_file(int fd);

/**
 * c_buffer - char_allocates a  1024 bytes of memory to a buffer
 * @file:pointer: file_name where buffer is storing char
 * Return: pointes to the new allocated buffer
 */
char *c_buffer(char *file)
{
	char *f_l = file;
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", f_l);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - close descriptors of a file
 * @file: refers to a closed file descriptor.
 */
void close_file(int file)
{
	int count;

	count = close(file);

	if (count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
		exit(100);
	}
}

/**
 * main - program that copies the content of a file to another file
 * @argc: arguments in the code
 * @argv: array of pointers
 * Return:The function must return only 0 on success
 */
int main(int argc, char *argv[])
{
	int m_f;
	int w_r;
	int o_t;
	char *buffer;
	int j;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = c_buffer(argv[2]);
	m_f = open(argv[1], O_RDONLY);
	j = read(m_f, buffer, 1024);
	o_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (m_f == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w_r = write(o_t, buffer, j);
		if (o_t == -1 || w_r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		j = read(m_f, buffer, 1024);
		o_t = open(argv[2], O_WRONLY | O_APPEND);

	} while (j > 0);

	free(buffer);
	close_file(m_f);
	close_file(o_t);

	return (0);
}
