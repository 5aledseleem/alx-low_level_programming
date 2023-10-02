#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file print
 * @filename: tet file
 * @letters: int
 * Return: w- act num of bytes read and printed
 *		0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bufferr;
	ssize_t fdy;
	ssize_t ww;
	ssize_t tt;

	fdy = open(filename, O_RDONLY);
	if (fdy == -1)
		return (0);
	bufferr = malloc(sizeof(char) * letters);
	tt = read(fdy, bufferr, letters);
	ww = write(STDOUT_FILENO, bufferr, tt);

	free(bufferr);
	close(fdy);
	return (ww);
}

