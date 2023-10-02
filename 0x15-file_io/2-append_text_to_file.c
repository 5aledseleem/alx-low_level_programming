#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: ptr
 * @text_content: str
 *
 * Return: If the function fails - -1.
 *	If the file does not exist - -1.
 *	Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ow, ww, lenw = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenw = 0; text_content[lenw];)
			lenw++;
	}

	ow = open(filename, O_WRONLY | O_APPEND);
	ww = write(ow, text_content, lenw);

	if (ow == -1 || ww == -1)
		return (-1);

	close(ow);

	return (1);
}

