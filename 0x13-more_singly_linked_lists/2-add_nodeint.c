#include "lists.h"

/**
* @add_nodeint - function to add the node at the begining of link
* @head: the head of the nodes
* @n: the integer
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t *));
	if(new != NULL)
	{
	new->n = n;
	new->next = *head;
	}
	else
	return (NULL);

	if (head != NULL)
	new->next = *head;
	*head = new;

	return (*head);
}
