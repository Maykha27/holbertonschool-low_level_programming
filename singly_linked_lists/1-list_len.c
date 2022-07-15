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
	size_t nodes = 0;
	while (h)
	{
		if (h->str == NULL)
		printf("[0] (nil)\n");

		else

		printf("[%d] %s\n", h->len, h->str);
		nodes++;
		h = h->next;

	}
	return (nodes);
}
