#include "lists.h"

/**
 * free_listint- main function
 * @head: head of the node
 * Return: void
 */

void free_listint2(listint_t **head)
{
    listint_t *temp;
    
    if (head == NULL)
	    return

    {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
    head = NULL
}
