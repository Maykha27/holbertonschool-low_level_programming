#include "lists.h"
#include <stdio.h>
/**
 * list_len - Finds the number of elememnts
 * @h: the linked list_t list
 *
 *Return: the number of elemnt in h
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
