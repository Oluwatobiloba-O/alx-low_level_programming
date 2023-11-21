#include "lists.h"

/**
* free_listint - Entry Points (free_listint)
*
* @head: pointer
* Return: 0
*/
void free_listint(listint_t *head)
{
listint_t *recent;

while (head != NULL)
{
recent = head;
head = head->next;
free(recent);
}
}
