#include "main.h"

/**
 * create_file - a function that creates a file.
 * file permissions: rw-------. If file exists, permissions are not changed.
 * Prototype: int create_file(const char *filename, char *text_content);
 * @filename: the name of the file to create.
 * @text_content: a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fileDescriptor, text_lengh = 0, bytesWritten, i;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fileDescriptor == (-1))
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			text_lengh++;

		bytesWritten = write(fileDescriptor, text_content, text_lengh);

		if (bytesWritten == (-1))
			return (-1);
	}

	close(fileDescriptor);
	return (1);
}
