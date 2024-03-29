#include "main.h"
#include <stdio.h>

/**
 * error_file - function to check if file can be open
 * @file_from: file from
 * @file_to: file to
 * @argv: pointer to vector
 * Return: return none
 */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 *main - main function
 *@argc: argument count
 *@argv: argument vector
 *Return: return 0
 */

int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int error_close;
	ssize_t new_char;
	ssize_t new_write;
	char buffer[1024];

	if (argc != 3)
	{
		dprint(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC |  O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	new_char = 1024;
	while (new_char == 1024)
	{
		new_char = read(file_from, buffer, 1024);
		if (new_char == -1)
			error_file(-1, 0, argv);

		new_write = write(file_to, buffer, new_char);
		if (new_write == -1)
			error_file(0, -1, argv);
	}

	error_close = close(file_from);
	if (errror_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	error_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
