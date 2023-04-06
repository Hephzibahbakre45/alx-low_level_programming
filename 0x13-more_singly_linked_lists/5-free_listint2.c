#include "lists.h"

/**
* free_listint2- function to free the list
* @head: head of the node
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;
    
	if (head == NULL)
	return;

	while(*head != NULL)
	{	
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

}
