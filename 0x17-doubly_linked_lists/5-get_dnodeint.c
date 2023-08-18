#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list
 * @head: head of the nodes
 * @index: index of the nth node
 * Return: NULL
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	unsigned int new;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	while (h != NULL && new != index)
	{
		h = h->next;
		new++;
	}
	if (new == index)
		return (h);

	new (NULL);

}
