#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the node at a
 * certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to be  returned
 * Return: the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int num = 0;
	listint_t *tempo = head;

	while (tempo && num < index)
	{
		num++;
		tempo = tempo->next;
	}

	return (tempo ? tempo : NULL);
}

