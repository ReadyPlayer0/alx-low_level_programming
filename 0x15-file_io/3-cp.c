#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"


/**
 * main - Entry point of the program.
 * @argc: The argument count.
 * @argv: The argument vector.
 *
 * Return: 0 on success, 97-100 on failure.
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w, r;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return 97;
	}

	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		return 98;
	}

	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_w < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd_r);
		return 99;
	}

	while ((r = read(fd_r, buf, BUFSIZ)) > 0)
	{
		if (write(fd_w, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			close(fd_w);
			return 99;
		}
	}

	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fd_r);
		close(fd_w);
		return 98;
	}

	if (close(fd_r) < 0 || close(fd_w) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptors\n");
		return 100;
	}

	return 0;
}
