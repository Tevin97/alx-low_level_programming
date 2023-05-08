#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments passed.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the program completes successfully - EXIT_SUCCESS.
 *         Otherwise - EXIT_FAILURE.
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, close_from, close_to, wcount, rcount;
	char buffer[BUFFER_SIZE];
	mode_t file_perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n",
			       	argv[0]), exit(97);

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			       	argv[1]), exit(98);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perms);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
			       	argv[2]), exit(99);

	do
	{
		rcount = read(fd_from, buffer, BUFFER_SIZE);
		if (rcount == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				       	argv[1]), exit(98);

		wcount = write(fd_to, buffer, rcount);
		if (wcount == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				       	argv[2]), exit(99);

	} while (rcount == BUFFER_SIZE);

	close_from = close(fd_from);
	close_to = close(fd_to);

	if (close_from == -1 || close_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
			       	close_from == -1 ? fd_from : fd_to), exit(100);

	return (EXIT_SUCCESS);
}
