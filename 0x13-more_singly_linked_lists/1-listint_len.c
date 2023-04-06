include "lists.h"

/**
* listint_len - function that print the element in a link
* @h: head of a nodes
* Return: return number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t new;

	while (h != NULL)
	{
	h = h->next;
	new++;
	}

	return (new);
}
