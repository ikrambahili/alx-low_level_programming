#include "lists.h"
#include <stdlib.h>

/**
* pop_listint - Deletes the head node of a listint_t LINKED list.
* @head: POINTER  to  POINTER to  head of the LINKED LIST.
* Return:DATA (n) of head node that was deleted, or 0 if the list is empty.
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int data = 0;
if (head != NULL && *head != NULL)
{
temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);
}
return (data);
}
