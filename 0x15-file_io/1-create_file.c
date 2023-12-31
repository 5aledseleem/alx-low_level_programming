#include "main.h"

/**
 * create_file - Creates a file
 * @filename: ptr
 * @text_content: ptr
 *
 * Return: If the function fails - -1.
 *		Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdy, ww, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fdy = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	ww = write(fdy, text_content, length);

	if (fdy == -1 || ww == -1)
		return (-1);

	close(fdy);

	return (1);
}

