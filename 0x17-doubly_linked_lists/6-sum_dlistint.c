#include "lists.h"

/**
* sum_dlistint - function to sum all the data
* @head: pointer to head of the node
* Return:if the list is empty, return 0
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *h = head;

int add = 0;
if (head == NULL)
return (add);
while (h->prev != NULL)
h = h->prev;

while (h != NULL)
{
add += h->n;
h = h->next;
}

return (add);
}
