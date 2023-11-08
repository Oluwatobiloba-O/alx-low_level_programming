#include "function_pointers.h"


/**
* array_iterator - Entry point (array_iterator)
*
* @array: array_iterator
* @size: array_iterator
* @action:  pointer
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t x;


if (array && action)
{
x = 0;
while (x < size)
{
action(array[x]);
x++;
}
}
}
