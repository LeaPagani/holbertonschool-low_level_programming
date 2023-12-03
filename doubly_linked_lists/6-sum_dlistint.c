#include "lists.h"

/**
  * sum_dlistint - Sum of all the data (n) of a doubly linked list
  * @head: Head of double linked list
  * Return: Sum of all nodes
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *headcopy;
	int sum = 0;

	headcopy = head;
	if (headcopy != NULL)
	{
		while (headcopy->prev != NULL)
			headcopy = headcopy->prev;

		while (headcopy != NULL)
		{
			sum += headcopy->n;
			headcopy = headcopy->next;
		}
		return (sum);
	}
	else
		return (0);
}
