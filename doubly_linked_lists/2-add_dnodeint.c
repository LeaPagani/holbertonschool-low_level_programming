#include "lists.h"

/**
  * add_dnodeint - Add a node at the begining of a double linked list
  * @head: Header of double linked list
  * @n: Number to set in a new node
  * Return: Address of a new element
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while ((*head)->prev != NULL)
			(*head) = (*head)->prev;
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}
	return (*head);
}
