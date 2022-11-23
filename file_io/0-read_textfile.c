#include "main.h"
/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Description: Write a function that reads a text file and prints it
 * to the POSIX standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *text;

	text = malloc(letters);
	if (text == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	o = open(filename, O_RDONLY);

	if (o == -1)
	{
		free(text);
		return (0);
	}

	r = read(o, text, letters);

	w = write(STDOUT_FILENO, text, r);

	close(o);

	return (w);
}
