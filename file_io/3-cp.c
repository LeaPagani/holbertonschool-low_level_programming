#include "main.h"
/**
 * main - Copy content from one file to another
 * @argc: Number of arguments
 * @argv: Vector of arguments
 * Return: 0 if successful
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to, fdR;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	fd_from = open(argv[1], O_RDONLY);
	if (!argv[1] || fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((fdR = read(fd_from, buffer, 1024)) > 0)
	{
		if (write(fd_to, buffer, fdR) != fdR || fd_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (fdR == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd_to), exit(100);
	return (0);
}
