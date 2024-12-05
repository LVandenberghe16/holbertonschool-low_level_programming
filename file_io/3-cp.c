#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * handle_error - Prints an error message and exits the program.
 * @message: The error message.
 * @filename: The file causing the error (can be NULL).
 * @exit_code: The exit code.
 */
void handle_error(const char *message, const char *filename, int exit_code)
{
	if (filename)
		dprintf(STDERR_FILENO, "%s %s\n", message, filename);
	else
		dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * open_file - Opens a file with the given flags and mode.
 * @filename: The name of the file.
 * @flags: The flags for opening the file.
 * @mode: The mode to use if the file is created.
 *
 * Return: The file descriptor.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
		handle_error("Error: Can't open file", filename, (flags & O_RDONLY) ?
			98 : 99);

	return (fd);
}

/**
 * copy_content - Copies content from one file descriptor to another.
 * @fd_from: The source file descriptor.
 * @fd_to: The destination file descriptor.
 * @file_from: The name of the source file (for error messages).
 * @file_to: The name of the destination file (for error messages).
 */
void copy_content(int fd_from, int fd_to, const char *file_from,
	const char *file_to)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			handle_error("Error: Can't write to file", file_to, 99);
	}

	if (bytes_read == -1)
		handle_error("Error: Can't read from file", file_from, 98);
}

/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 * @filename: The name of the file (for error messages).
 */
void close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the content of a file to another file.
 * @argc: The number of arguments.
 * @argv: The arguments (file_from and file_to).
 *
 * Return: 0 on success, or exits with error codes on failure.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		handle_error("Usage: cp file_from file_to", NULL, 97);

	fd_from = open_file(argv[1], O_RDONLY, 0);
	fd_to = open_file(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	copy_content(fd_from, fd_to, argv[1], argv[2]);

	close_file(fd_from, argv[1]);
	close_file(fd_to, argv[2]);

	return (0);
}
