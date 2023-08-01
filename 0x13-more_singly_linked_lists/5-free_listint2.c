#include "lists.h"
#include <stdlib.h>

/**
* free_listint2 - FREES a listint_t list.
* @head: POINTER to a POINTER to the head of the linked LIST.
*/
void free_listint2(listint_t **head)
{
listint_t *temp;
if (head == NULL)
return;
while (*head != NULL)
{
temp = *head;
*head = (*head)->next;
free(temp);
}
}
