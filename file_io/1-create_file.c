#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: The name of the file to create.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0, bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}