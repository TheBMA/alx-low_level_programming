#include "main.h"

/**
 * read_textfile - a function that reads a text file
 * and prints it to the POSIX standard output.
 * Prototype: ssize_t read_textfile(const char *filename, size_t letters);
 * @filename: an array of characters.
 * @letters:  the number of letters it should read and print.
 * Return: the actual number of letters it could read and print.
 * returns 0 if filename is NULL, or if it can not be opened or read.
 * returns 0 if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileDescriptor, bytesRead, bytesWritten;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);

	if (fileDescriptor == (-1))
		return (0);

	bytesRead = read(fileDescriptor, buffer, letters);

	if (bytesRead == (-1))
	{
		close(fileDescriptor);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);

	if (bytesWritten == (-1))
	{
		close(fileDescriptor);
		return (0);
	}

	close(fileDescriptor);
	free(buffer);
	return (bytesWritten);
}
