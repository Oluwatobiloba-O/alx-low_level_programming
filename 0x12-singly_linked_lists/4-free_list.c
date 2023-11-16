#include "lists.h"

/**
* free_list - Entry point (free_list)
*
* @head: pointer
* Return: void
*/
void free_list(list_t *head)
{
list_t *temp;

temp = head;
while (head)
{
head = head->next;
free(temp->str);
free(temp);
}
free(head);
}
