#include "list.h"
#include "stdio.h"
#include <stdlib.h>

/**
 * print_list - print all the elements of list_t list
 * @h: The list_t list
 *
 * Return: The number og nodes in h.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0

	while (h)
	{
		if (h->str == NULL)
			(printf("0[0] (nil)\n")'
			 ;
		else
			printf("[%d] %\n", h->len, h->str);
		nodes++;
		h = h-next;
	}

	return (nodes);
}
