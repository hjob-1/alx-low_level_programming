#include "lists.h"
#include <stdlib.h>

size_t print_listint(const listint_t *h)
{
    size_t len = 0;
    
    while (h != NULL)
    {
        printf("%d \n", h->n);
        len++;
        h = h->next;
    }
    return (len);
}
