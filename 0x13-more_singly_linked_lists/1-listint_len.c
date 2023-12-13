#include "lists.h"

/**
 * listint_len - a function that returns the number
 * of elements in a linked listint_t list.
 * Prototype: size_t listint_len(const listint_t *h);
 * @h: head of a listint_t
 * Return: the number of nodes.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nodes = 0;

	while (tmp != NULL)
	{
		tmp = (listint_t *)tmp->next;
		nodes++;
	}

	return (nodes);
}
