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
void print_dog(struct dog *d)
{
if (d == NULL)
return;
if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
