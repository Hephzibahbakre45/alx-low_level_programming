#include "lists.h"

/**
 * print_listint - function that print the element of a node
 * @h: the head of the node
 * Return: return the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	
	while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}

	return (count);
}
