#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements
 * in a linked dlistint_t list
 * @h: head pointer
 * Return: returns the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		counter++;
		current = current->next;
	}

	return (counter);
}

