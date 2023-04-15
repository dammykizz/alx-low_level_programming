#include "main.h"

/**
 * create_file - function to file.
 * @filename: pointing  to the name of file to create.
 * @text_content: points to string to write.
 *
 * Return: -1 if function fail.
 *         1 if success.
 */
int create_file(const char *filename, char *text_content)
{
	int opn, kn, gh = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (gh = 0; text_content[gh];)
			gh++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	kn = write(opn, text_content, gh);

	if (opn == -1 || kn == -1)
		return (-1);

	close(opn);

	return (1);
}
