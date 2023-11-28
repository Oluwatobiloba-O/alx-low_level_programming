#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define MAXSIZE 1024
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

if (argc != 3)
__exit(97, NULL, 0);

input_x = open(argv[1], O_RDONLY);
if (input_x == -1)
__exit(98, argv[1], 0);

output_x = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (output_x == -1)
__exit(99, argv[2], 0);

while ((status_i = read(input_x, buf, MAXSIZE)) > 0)
{
status_o = write(output_x, buf, status_i);
if (status_o == -1 || status_o != status_i)
__exit(99, argv[2], 0);
}

if (status_i == -1)
__exit(98, argv[1], 0);

if (close(input_x) == -1)
__exit(100, NULL, input_x);

if (close(output_x) == -1)
__exit(100, NULL, output_x);

return (0);
}
