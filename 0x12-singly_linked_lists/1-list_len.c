#include "lists.h"

/**
 * list_len - a function that returns the number of elements in a linked list.
 * Prototype: size_t list_len(const list_t *h);
 * @h: head of a list_t.
 * Return: the number of elements in a linked list_t list.
 */

size_t list_len(const list_t *h)
{
	const list_t *temp = h;
	size_t elements = 0;

	while (temp != NULL)
	{
		if (temp->str != NULL)
			elements++;

		temp = (list_t *)temp->next;
	}

	return (elements);
}
