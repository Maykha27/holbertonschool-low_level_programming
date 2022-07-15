#include "lists.h"
#include <stdio.h>
/**
 * listint_len - Rturns the number of elemnts in a linked
 * @h: A pointer to the head of the listint_t list
 *
 * Return: the number of elements in the listing_t list
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

