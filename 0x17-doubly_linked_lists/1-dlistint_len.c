#include "lists.h"

/**
* dlistint_len - main function to print the element
* @h: pointer to the head
* Return: the number of elements in a linked dlistint_t list.
*/

size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	if (h == NULL)
	return (len);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}

	while (h->prev != NULL)
		h = h->prev;

	return (len);
}