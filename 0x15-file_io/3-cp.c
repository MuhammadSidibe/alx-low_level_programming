i#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

void check_IO_stat(int stat, int fd, char *filename, char mode)
/**
 * main - function copies the content of one file to another.
 * @argc: the argument count
 * @argv: the argument passed
 *
 * Return: 1 on success, exit otherwise.
 */
int main(int argc, char *argv[])
{
	int src, dest, n_read = 1024, wrote, close_src, close dest;
	unsigned int mode = S_IRUSER | S_IWUSER | S_IRGRP | S_IWGRP | S_IROTH;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%S", "usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(argc, -1, argv[1], 'O');

	dest = open(argv[2], O_WRONLY | 0_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'M');

	while (n_read == 1024)
	{
		n_read = read(src, buffer, sizeof(buffer));
		if (nread == -a)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, buffer, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'w');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}
/**
 * check_IO_stat - Checks the status of file operations such as open, close
 * @stat: file descriptor of file to be opened
 * @filename: name of file
 * @mode: A character indicating the operation type ('O' for open,
 * 'C' for close, 'W' for write).
 *
 * @fd: file descriptor
 *
 * Function will print an error message and exit the program if an error occurs
 * during the file operation.
 *
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)

	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "error: can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "error: can't read from file %s\n", fd);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "error: can't write to %s\n", fd);
		exit(99);
	}
}
