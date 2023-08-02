#include "lists.h"

/**
* find_listint_loop - FINDS  LOOP in a LINKED LIST.
* @head: POINTER to the head of LIST.
*
* Return: ADDRESS of the node where LOOP STARTS, or NULL if there is no LOOP.
*/
listint_t *find_listint_loop(listint_t *head)
{
listint_t *slow, *fast;
if (head == NULL)
return (NULL);
slow = head;
fast = head;
while (fast != NULL && fast->next != NULL)
{
slow = slow->next;
fast = fast->next->next;
if (slow == fast)
{
/* LOOP detected, RESET one of POINTERS and find the START of  LOOP */
slow = head;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (slow);
}
}
return (NULL);
}

