#include "dog.h"
#include <stdio.h>

/**
* init_dog - Entry point (init_dog)
*
* @d: pointer
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: Always 0.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if  (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
