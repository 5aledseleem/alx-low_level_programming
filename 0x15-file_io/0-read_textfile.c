#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print
 * @filename: tet file
 * @letters: int
 * Return: w- act num of bytes read and printed
 *		0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdy;
	ssize_t ww;
	ssize_t tt;

	fdy = open(filename, O_RDONLY);
	if (fdy == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	t = read(fdy, buffer, letters);
	w = write(STDOUT_FILENO, buffer, tt);

	free(buffer);
	close(fdy);
	return (ww);
}

