#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - Entry point (print_name)
*
* @name: print_name
* @f: print_name
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
