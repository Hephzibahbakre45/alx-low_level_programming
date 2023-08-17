#include "lists.h"

/**
* free_dlistint - function that free the list
* @head: pointer to the list
* Return: 0
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *h = head;
dlistint_t *new;
if (head == NULL)
return;

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
new = h->next;
free(h);
h = new;
}
}
