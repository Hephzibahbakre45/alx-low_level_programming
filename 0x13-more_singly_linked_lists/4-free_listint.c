#include "lists.h"

/**
 * free_listin- function to free a linked list
 * @head: head of the list
 * Return: return nothing.
*/

void free_listint(listint_t *head)
{
    listint_t *temp;

    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }

}