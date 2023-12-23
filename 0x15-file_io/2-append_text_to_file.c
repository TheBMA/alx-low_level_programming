#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * Prototype:
 * int append_text_to_file(const char *filename, char *text_content);
 * @filename: the name of the file.
 * @text_content: the NULL terminated string to add at the end of the file.
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fileDescriptor, bytesWritten, text_size = 0, i;

	if (filename == NULL)
		return (-1);

	fileDescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fileDescriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			text_size++;

		bytesWritten = write(fileDescriptor, text_content, text_size);
		if (bytesWritten == -1)
		{
			close(fileDescriptor);
			return (-1);
		}
	}

	close(fileDescriptor);
	return (1);
}
