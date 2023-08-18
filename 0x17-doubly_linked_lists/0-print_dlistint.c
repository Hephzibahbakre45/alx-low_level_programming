#include "list.h"

/**
 * print_dlistint - function that print all the element of a
 * @h: head to the list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int new;

	new = 0;

	if (h == NULL)
		return (new);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n" h->n);
		new++;
		h = h->next;
	}

	return (new)
