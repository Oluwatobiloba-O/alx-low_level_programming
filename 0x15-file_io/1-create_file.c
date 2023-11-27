#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
* create_file - Entry point ()
*
* @filename: filename
* @text_content: string
* Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
int x, y, z;

if (filename == NULL)
return (-1);

x = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (x == -1)
return (-1);

if (text_content != NULL)
{
y = 0;
while (text_content[y] != '\0')
y++;

z = write(x, text_content, y);
if (z != y)
{
close(x);
return (-1);
}
}

close(x);
return (1);

}
