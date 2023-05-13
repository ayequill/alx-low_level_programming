#include "main.h"

/**
 * read_and_print_textfile - reads a text file and prints it to the stdout
 * @filename: name of the file to be read
 * @max_chars: maximum number of characters to be printed
 * Return: number of characters printed, or 0 if there was an error
 */
ssize_t read_and_print_textfile(const char *filename, size_t max_chars)
{
	int file_descriptor, error, bytes_read;
	char *buffer;

	file_descriptor = error = bytes_read = 0;
	if (!filename || !max_chars)
		return (0);
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	buffer = malloc(sizeof(char) * max_chars + 1);
	if (!buffer)
		return (0);
	bytes_read = read(file_descriptor, buffer, max_chars);
	if (bytes_read < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[max_chars] = '\0';
	error = write(STDOUT_FILENO, buffer, bytes_read);
	if (error <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (bytes_read);
}
