#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end
 * of a dlistint_t list
 * @head: pointer
 * @n: new node to add at the end
 * Return: the address of the new element,
 * or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *added_node;
	dlistint_t *current;

	if (head == NULL)
		return (NULL);

	added_node = malloc(sizeof(dlistint_t));
	if (added_node == NULL)
		return (NULL);

	added_node->n = n;
	added_node->next = NULL;

	if (*head == NULL)
	{
		added_node->prev = NULL;
		*head = added_node;
		return (added_node);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = added_node;
	added_node->prev = current;

	return (added_node);
}

