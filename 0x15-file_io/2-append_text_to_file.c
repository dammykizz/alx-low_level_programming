#include "main.h"

/**
 * append_text_to_file - adds text to the end of a file.
 * @filename: points to the name file.
 * @text_content: string to append to the end of the file.
 *
 * Return: -1 if function fails, filename is NULL
 *	-1 file does not exist, or user lacks write permissions.
 *	Otherwise - return 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, kn, gh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (gh = 0; text_content[gh];)
			gh++;
	}

	opn = open(filename, O_WRONLY | O_APPEND);
	kn = write(opn, text_content, gh);

	if (opn == -1 || kn == -1)
		return (-1);

	close(opn);

	return (1);
}
