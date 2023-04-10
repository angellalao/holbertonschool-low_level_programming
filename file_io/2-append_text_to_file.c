#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to be appended
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int c;
	ssize_t append;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	c = 0;
	while (text_content[c] != '\0')
	{
		c = c + 1;
	}
	append = write(fd, text_content, c);
	if (append == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}