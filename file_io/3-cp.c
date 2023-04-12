#include "main.h"

/**
 * closex - close fd
 * @fd: file descriptor to be closed
 * @filename: name of file
 * Return: -1 if error, otherwise return nothing
 */
void closex(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd");
		exit(100);
	}
	return;
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments entered (int)
 * @argv: array vector (array of pointers to char)
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fdfrom, fdto;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
	{
		dprintf(STDERR_FILENO,"Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdto == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	bytes_read = read(fdfrom, buffer, sizeof(buffer));
	while (bytes_read != 0)
	{
		bytes_written = write(fdto, buffer, bytes_read);
		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	closex(fdfrom);
	closex(fdto);
	return (0);
}
