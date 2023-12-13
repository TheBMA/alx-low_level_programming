#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * Prototype: size_t print_listint(const listint_t *h);
 * @h: head of a listint_t
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *tmp = h;
	size_t nodes = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = (listint_t *)tmp->next;
		nodes++;
	}

	return (nodes);
}
