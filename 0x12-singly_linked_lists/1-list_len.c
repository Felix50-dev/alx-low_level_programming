#include <stdio.h>
#include "lists.h"

/**
* list_len - prints number of elements of a list
* @h : pointer to the head node.
*
* Return: number of elements in the list.
*/
size_t list_len(const list_t *h)
{
        size_t n = 0;
        while(h)
        {
                h = h->next;
                n++;
         }
         printf("-> %lu elements\n", n);
        return (n);
}
