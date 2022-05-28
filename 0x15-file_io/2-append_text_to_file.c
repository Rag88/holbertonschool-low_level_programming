#include "main.h"

/**
 * append_text_to_file - function that appends text to a file
 *
 * @filename: name of the file
 * @text_content: input null-terminated text that will be append to the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, text_size = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[text_size])
		text_size++;

	write(fd, text_content, text_size);

	if (close(fd) < 0)
		return (-1);

	return (1);
}
