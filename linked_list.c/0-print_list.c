#include "lists.h"

size_t print_list(const list_t *h)
{
    size_t num = 0;
    
    while(h != NULL)
    {
        if(h->str == NULL)
        {
            printf("[0] (nil)");
        }
        else
        {
            printf("[%d] %s", h->len, h->str);
        }
        num++;
        h = h->next;
 }

 return (num);

}