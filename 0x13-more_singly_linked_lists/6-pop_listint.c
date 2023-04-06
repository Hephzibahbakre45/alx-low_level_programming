#include "lists.h"

/**
* pop_listint- function to delete node at the beginning
* @head: pointer to the head of the node
* Return: return the head node’s data (n).
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;
	
	if (temp == NULL)
		return (0);

	*head = temp->next;
	n = temp->n;
	free(temp);
	return (n);
}
