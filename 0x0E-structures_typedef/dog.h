#ifndef DOG_H
#define DOG_H

typedef struct dog dog_t;
/**
* struct dog - Entry point (struct dog)
* @name: dog's name
* @age: dog's age
* @owner: dog's owner
*
* Return: Always 0.
*/
struct dog
{
char *name;
float age;
char *owner;
}

my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
