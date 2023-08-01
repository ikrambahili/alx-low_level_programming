#include "lists.h"

/**
* sum_listint - RETURNS sum of all data (n) of a listint_t LINKED LIST.
* @head: POINTER to head of the LINKED LIST.
* Return: Sum of the data (n) of LINKED LIST, or 0 if THE LIST is Empty.
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *current = head;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
