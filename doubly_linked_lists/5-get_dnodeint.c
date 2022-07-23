#include "lists.h"
/**
 * get_dnodeint_at_index - locates a node in a dlistint_t
 * @head: the head of the dlitint_t list
 * @index: the node to locate
 * Return: If the node  does no exist - NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
				return (NULL);
		head = head->next;
	}

	return (head);
}
