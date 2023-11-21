#include <stdio.h>
#include "lists.h"

/**
* print_listint - Entry point (print_listint)
* @h: pointer for list head
*
* Return: num
*/
size_t print_listint(const listint_t *h)
{
const listint_t *x;
size_t num = 0;

for (x = h, num = 0; x != NULL; num++, x = x->next)
{
printf("%d\n", x->n);
}
return (num);
}
