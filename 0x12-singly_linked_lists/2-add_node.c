#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * @head: pointer to a list_t
 * @str: str of the new node to add
 * str is duplicated
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int i = 0, str_len = 0;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (str[i] != '\0')
		i++, str_len++;

	new_node->len = str_len;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
