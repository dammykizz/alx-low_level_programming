#include "main.h"

/**
 * create_file - function to file.
<<<<<<< HEAD
 * @filename: points to the name of file to create.
=======
 * @filename: pointing  to the name of file to create.
>>>>>>> 0bdce54cdb5614d10645d76a76347a9548b5cc69
 * @text_content: points to string to write.
 *
 * Return: -1 if function fail.
 *         1 if success.
 */
int create_file(const char *filename, char *text_content)
{
<<<<<<< HEAD
	int opn, wt, ln = 0;
=======
	int opn, kn, gh = 0;
>>>>>>> 0bdce54cdb5614d10645d76a76347a9548b5cc69

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
<<<<<<< HEAD
		for (ln = 0; text_content[ln];)
			ln++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(opn, text_content, ln);

	if (opn == -1 || wt == -1)
=======
		for (gh = 0; text_content[gh];)
			gh++;
	}

	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	kn = write(opn, text_content, gh);

	if (opn == -1 || kn == -1)
>>>>>>> 0bdce54cdb5614d10645d76a76347a9548b5cc69
		return (-1);

	close(opn);

	return (1);
}
