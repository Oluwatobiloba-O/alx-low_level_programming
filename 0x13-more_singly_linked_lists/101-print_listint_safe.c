#include "lists.h"

/**
* print_listint_safe - Entry point
*
* @head: pointer
* Return: num
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *prev, *next;
size_t num;

prev = head;
next = head;
num = 0;

while (prev != NULL && next != NULL && next->next != NULL)
{
printf("[%p] %d\n", (void *)prev, prev->n);
num++;
prev = prev->next;
next = next->next->next;

if (prev == next)
{
printf("-> [%p] %d\n", (void *)prev, prev->n);
break;
}
}

if (prev == NULL || next == NULL || next->next == NULL)
{
while (head != NULL)
{
printf("[%p] %d\n", (void *)head, head->n);
num++;
head = head->next;
}
}

return (num);
}
