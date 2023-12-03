#include "lists.h"

/**
  * free_dlistint - Free a double linked list
  * @head: Head of double linked list
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *savepoin;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			savepoin = head->next;
			free(head);
			head = savepoin;
		}
	}
}
