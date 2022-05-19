#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_list - is a function that prints all elements of a list_t list
 * @h: is the string input
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
    size_t len = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            printf("[%d] (%s)\n", 0, "nil");
        }
        else
        {
            printf("[%d] %s \n", h->len, h->str);
        }

        len++;
        h = h->next;
    }
    return (len);
}