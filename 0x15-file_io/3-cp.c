#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define MAXSIZE 1204
#define SE STDERR_FILENO

/**
* __exit - prints error messages and exits with exit value
* @error: num is either exit value or file descriptor
* @s: str is a name, either of the two filenames
* @fd: file descriptor
* Return: 0 on success
**/
int __exit(int error, char *s, int fd)
{
switch (error)
{
case 97:
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(error);
case 98:
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
exit(error);
case 99:
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
exit(error);
case 100:
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(error);
default:
return (0);
}
}

/**
* main - create the copy bash script
*
* @ac: argument count
* @av: argument
* Return: 0
*/
int main(int ac, char *av[])
{
int input_x, output_x, status_i, status_o;
char buf[MAXSIZE];
mode_t z;

z = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (ac != 3)
dprintf(SE, "Usage: cp file_from file_to\n"), exit(97);
input_x = open(av[1], O_RDONLY);
if (input_x == -1)
dprintf(SE, "Error: Can't read from file %s\n", av[1]), exit(98);
output_x = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, z);
if (output_x == -1)
dprintf(SE, "Error: Can't write to %s\n", av[2]), exit(99);
do {
status_i = read(input_x, buf, MAXSIZE);
if (status_i == -1)
{
dprintf(SE, "Error: Can't read from file %s\n", av[1]);
exit(98);
}
if (status_i > 0)
{
status_o = write(output_x, buf, (ssize_t) status_i);
if (status_o == -1)
{
dprintf(SE, "Error: Can't write to %s\n", av[2]);
exit(99);
}
}
} while (status_i > 0);
status_i = close(input_x);
if (status_i == -1)
dprintf(SE, "Error: Can't close x %d\n", input_x), exit(100);
status_o = close(output_x);
if (status_o == -1)
dprintf(SE, "Error: Can't close x %d\n", output_x), exit(100);
return (0);

}
