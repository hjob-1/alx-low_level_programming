#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * Prints all the elements of a list_t list.
 *
 * @param h pointer to the head of the list
 *
 * @return The number of nodes in the linked list.
 */
size_t print_list(const list_t *h)
{
    size_t len = 0;

    if (h == null)
        return (1);

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil) \n");
        else
            printf("[%d] %s \n", h->len, h->str);

        len++;
        h = h->next;
    }
    return (len);
}