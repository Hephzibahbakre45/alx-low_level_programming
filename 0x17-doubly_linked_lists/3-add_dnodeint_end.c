 #include "lists.h"

/**
* add_dnodeint_end - function that add new node to end of the list
* @head: pointer to node
* @n: element to add to the list
* Return: the address of the new element, or NULL if it failed
*/


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h = *head;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	return (NULL);
	if (h != NULL)
	{
	while (h->next != NULL)
	h = h->next;
	}

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = h;
	if (h != NULL)
	{
	h->next = new_node;
	}
	*head = new_node;
	return (new_node);

	}
