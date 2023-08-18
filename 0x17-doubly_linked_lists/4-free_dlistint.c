#include "lists.h"

/**
 * free_dlistint - function that frees dlistint_t list
 * @head: head of a node
 * Return: nothing
 **/

void free_dlistint(dlistint_t *head);
{
	dlistint_t *new;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while ((new = head) != NULL)
	{
		head = head->next;
		free(new);
	}

}
