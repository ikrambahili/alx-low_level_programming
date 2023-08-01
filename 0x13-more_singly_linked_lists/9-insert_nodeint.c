#include "lists.h"
#include <stdlib.h>
/**
* add_nodeint - Adds a new node at the beginning of a listint_t LIST.
* @head: POINTER to the head of the list.
* @n: Integer value to store in the new node.
* Return: ADDERESS of new element, or NULL if it FAILED.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
/**
* insert_nodeint_at_index - Inserts a new node at a given POSITION IN A LINKED LIST.
* @head: POINTER to head of LINKED LIST.
* @idx: Index of  LIST where the new node  It must added. Index starts at 0.
* @n: Data (n) of the new node to be added.
* Return: THE ADDERESS of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int count = 0;
listint_t *current = *head;
listint_t *new_node;
if (idx == 0)
return (add_nodeint(head, n));
while (current != NULL && count < idx - 1)
{
current = current->next;
count++;
}
if (current == NULL)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;
new_node->next = current->next;
current->next = new_node;
return (new_node);
}
