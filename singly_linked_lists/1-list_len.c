#include <stdio.h>
#include "lists.h"

/**
* list_len - Function that returns number of elements in a linked list
* @h: Pointer to linked list
* Return: Number of nodes in h
*/
size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
