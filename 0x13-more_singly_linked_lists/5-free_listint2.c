#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - Entry point
*
* @head: pointer
* Return: 0
*/
void free_listint2(listint_t **head)
{
listint_t *temp;

if (!head)
return;

temp = *head;

while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}

*head = NULL;
}
