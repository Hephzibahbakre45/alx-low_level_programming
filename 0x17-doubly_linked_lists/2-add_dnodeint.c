#include "lists.h"

/**
*add_dnodeint- function to add node to the beginning
*@head: double pointer
*@n: element to add the node
*Return: the address of the new element, or NULL if it failed.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == Null)
	return (NULL);

	if (h != NULL)
	(
		while (h->prev != NULL)
		h = h->prev;
	)

	new->n = n;
	new->prev = NULL;
	new->next = h;

	if (h != NULL)
	{
		h->prev = new;
	}
	*head = new;
	return (new);
}
