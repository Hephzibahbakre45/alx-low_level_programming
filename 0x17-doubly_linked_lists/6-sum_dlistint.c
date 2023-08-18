#include "lists.h"

/**
 * sum_dlistint - function that returns thebsum of all 
 * the data
 * @head: head of the data
 * Return: 0
 **/

int sum_dlistint(dlistint_t *head);
{
	int i;
	i = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		
		while (head != NULL)
		{
			i+= head->n;
			head = head->next;
		}

	}

	return (i)

}

