#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list.
 * Prototype: listint_t *add_nodeint(listint_t **head, const int n);
 * @head: pointer to the head of a listint_t
 * @n: the element to add
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead;

	newhead = malloc(sizeof(listint_t));

	if (newhead == NULL)
		return (NULL);

	newhead->n = n;

	if (*head != NULL)
		newhead->next = *head;
	else
		newhead->next = NULL;

	*head = newhead;

	return (newhead);
}
