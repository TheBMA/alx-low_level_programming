#include "main.h"

/**
 * main - a program that copies the content of a file to another file.
 * @argc: argument count.
 * @argv: argument vector.
 * Return: 0 if successful.
 */

int main(int argc, char *argv[])
{
	int fromDescriptor, toDescriptor, bytesRead, bytesWritten;
	char *file_from, *file_to;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1];
	file_to = argv[2];
	fromDescriptor = open(file_from, O_RDONLY);
	toDescriptor = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fromDescriptor == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fromDescriptor);
			close(toDescriptor);
			exit(98);
		}

	while ((bytesRead = read(fromDescriptor, buffer, sizeof(buffer))) > 0)
	{
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(fromDescriptor);
			close(toDescriptor);
			exit(98);
		}

		bytesWritten = write(toDescriptor, buffer, bytesRead);

		if (toDescriptor == -1 || bytesWritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fromDescriptor);
			close(toDescriptor);
			exit(99);
		}
	}

	if (bytesRead == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fromDescriptor);
		close(toDescriptor);
		exit(98);
	}

	if (close(fromDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fromDescriptor);
		exit(100);
	}
	if (close(toDescriptor) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", toDescriptor);
		exit(100);
	}

	return (0);
}
