#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
* read_textfile - A function that reads a text file
*
* @filename: Names of file
* @letters: Letters
* Return: 0
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int x;
ssize_t rnum, wnum;
char *xyz;

if (!filename)
return (0);

x = open(filename, O_RDWR);
if (x == -1)
return (0);

xyz = malloc(sizeof(char) * letters);
if (xyz == NULL)
{
free(xyz);
return (0);
}
rnum = read(x, xyz, letters);
if (rnum == -1)
return (0);

wnum = write(STDOUT_FILENO, xyz, rnum);
if (wnum == -1 || rnum != wnum)
return (0);
free(xyz);

close(x);
return (wnum);
}
