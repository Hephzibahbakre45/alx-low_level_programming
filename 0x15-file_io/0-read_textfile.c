#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints it
 * @filename: pointer to the name of the file
 * @letters: letters to be printed
 * Return: returns the actual number of letters it could read and print
 */


size_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDWR);
	if (fd < 0)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(fd);
		return (0);
	}
	bytes_read = read(fd, buffer, letters);
	if (bytes_read < 1)
	{
		free(buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, byte_read);
	if (bytes_written < 0 || bytes_written != bytes_read)

		return (0);


	close(fd);
	return (bytes_read);

}
