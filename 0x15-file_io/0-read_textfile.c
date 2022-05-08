#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 * @filename: Name of the file to read
 * @letters: Number of letters it should read and print
 * Return: Actual number of letters it could read and print, 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w; /* r -> reader & w -> writer */
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	r = read(fd, buffer, letters); /*Reads the file*/
	close(fd);
	if (r < 0)
	{
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (w < 0)
		return (0);

	return (w);
}
