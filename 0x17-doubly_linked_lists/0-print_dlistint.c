#include "lists.h"

/**
* print_dlistint - main function to print the element of a list
* @h: pointer to the node
* Return: the number of nodes
*/


size_t print_dlistint(const dlistint_t *h)
{
size_t element = 0;

if (h == NULL)
return (element);

while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
	printf("%d\n", h->n);
	h = h->next;
	element++;
}

return (element);
}
