#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int fd2;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1024];

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_CREAT, S_IRUSR | S_IWUSR | O_TRUNC);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	fd2 = open(text_content, O_RDONLY);
	if (fd2 == -1)
	{
		close(fd);
		return (-1);
	}
	bytes_read = read(fd2, buffer, sizeof(buffer));
	if (bytes_read == -1)
	{
		close(fd);
		close(fd2);
		return (-1);
	}
	bytes_written = write(fd, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written < bytes_read)
	{
		close(fd);
		close(fd2);
		return (-1);
	}
	close(fd);
	close(fd2);
	return (1);
}
