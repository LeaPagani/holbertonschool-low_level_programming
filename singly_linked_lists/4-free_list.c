#include <stdlib.h>
#include "lists.h"

/**
* free_list - Frees a linked list.
* @head: Pointer to the head of linked list.
* Return: Nothing.
*/

void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
