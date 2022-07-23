#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node
 * @head: A pointer to the head
 * @n:the integer for the new node to contain
 *
 *Return: If the function fails - NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	last = *head;
	while (last->next != NULL)
	last = last->next;
	last->prev = new;
	new->prev = last;

	return (new);

}
