#include "dog.h"
#include <stdlib.h>
int _strlen(char *x);
char *_strcpy(char *dest, char *src);

/**
* new_dog - .
* @name: .
* @age: .
* @owner: .
*
* Return: .
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *kayla;
int dog_l = 0, bibi = 0;

if (name != NULL && owner != NULL)
{
dog_l = _strlen(name) + 1;
bibi = _strlen(owner) + 1;
kayla = malloc(sizeof(dog_t));

if (kayla == NULL)
return (NULL);

kayla->name = malloc(sizeof(char) * dog_l);

if (kayla->name == NULL)
{
free(kayla);
return (NULL);
}

kayla->owner = malloc(sizeof(char) * bibi);

if (kayla->owner == NULL)
{
free(kayla->name);
free(kayla);
return (NULL);
}

kayla->name = _strcpy(kayla->name, name);
kayla->owner = _strcpy(kayla->owner, owner);
kayla->age = age;
}

return (kayla);
}

/**
* _strlen - Returns the length of a string
* @s: _strlen
*
* Return: x
*/
int _strlen(char *s)
{
int x = 0;

for (; *s != '\0'; s++)
{
x++;
}

return (x);
}

/**
* _strcpy - Copy a string
* @dest: Destination
* @src: Source
*
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
int y;

for (y = 0; src[y] != '\0'; y++)
{
dest[y] = src[y];
}

dest[y++] = '\0';

return (dest);
}
