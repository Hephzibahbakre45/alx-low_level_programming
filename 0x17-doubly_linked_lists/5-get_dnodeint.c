#include "lists.h"

/**
* get_dnodeint_at_index - function that returns
* the nth node of a dlistint_t linked list
* @head: pointer to the node
* @index: index of the node, starting from 0
* Return: NULL
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *h = head;
unsigned int temp = 0;

if (h != NULL)
{
while (h->prev != NULL)
h = h->prev;
}
while (h != NULL && temp != index)
{
h = h->next;
temp++;
}
if (temp == index)
return (h);
}
