#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Prints text file to STDOUT.
 * @filename: refers to text file
 * @letters: number of char to read
 * Return: number of letters read and printed, 0 if fail
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);

	return (w);
}
