#include "lists.h"

/**
* get_nodeint_at_index- function that return the nth node
* @head: pointer to the node
* @index: index of the node 
* Return: return 0
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; (i < index) && (head->next); i++)
		head = head->next;

	if (i != index)
		return (NULL);

	return (head);
}
