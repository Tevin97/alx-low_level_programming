#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX stdout
 * @filename: pointer to filename string
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rcount, wcount;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	rcount = read(fd, buf, letters);
	if (rcount == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	wcount = write(STDOUT_FILENO, buf, rcount);
	if (wcount == -1 || wcount != rcount)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);
	return (rcount);
}
