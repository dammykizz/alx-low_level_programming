#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function to read a text file to the POSIX stdout.
<<<<<<< HEAD
 * @filename: points to the file name.
 * @letters: number of characters the
 *           function read and print.
=======
 * @letters: number of characters the
 *           function read and print.
 * @filename: point to the file name. 
>>>>>>> 0bdce54cdb5614d10645d76a76347a9548b5cc69
 *
 * Return: 0 if filename is NULL or if function fails.
 *         O/w - number of bytes the function reads and prints.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opn, rd, wt;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buffer, letters);
	wt = write(STDOUT_FILENO, buffer, rd);

	if (opn == -1 || rd == -1 || wt == -1 || wt != rd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(opn);

	return (wt);
}
