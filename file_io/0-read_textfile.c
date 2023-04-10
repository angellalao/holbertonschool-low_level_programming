#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer to a list of chars to be printed
 * @letters: number of letters to be read and printed
 * Return: actual number of letters that could be read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read;
	ssize_t bytes_written;
	char buffer[1000];
	int fd;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_read != bytes_written)
	{
		return (0);
	}
	close(fd);
	return (bytes_written);
}
