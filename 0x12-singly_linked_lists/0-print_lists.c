#include <stdio.h>
#include "lists.h"

/**
* print_list prints elements of a list
* @*h : pointer to the head node
* Return: number of elements in the list.
*/
size_t print_list(const list_t *h)
{
        int num = 0;
	while(h != NULL)
	{
		if(h->str == NULL)
		{
			printf("[0] (nil)");
		}
 printf(" %s ", h->str);
                h = h->next;
                num++;
        }
        size_t n = num;
        return n;
}
