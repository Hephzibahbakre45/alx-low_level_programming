#include "lists.h"

/**
 * pop_listint- main function
 * @head: pointer to the head of the node
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	temp = *head;
	
	if (temp == NULL)
		return (0);

	*head = temp->next;
	i = temp->i;
	free(temp);
	return (i);
