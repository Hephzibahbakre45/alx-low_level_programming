include "lists.h"

/**
 * listint_len - function that print the element in a link
 * @h: head of a nodes
 * Return: return number of nodes
*/

size_t listint_len(const listint_t *h)
{
    size_t count = 0;
    while (h != NULL)
    {
        h = h->next;
        count++;
    }

    return (count);
}