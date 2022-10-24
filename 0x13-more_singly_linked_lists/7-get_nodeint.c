#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node
 * of a listint_t linked list.
 *
 * @head: A pointer to the first node of the list
 * @index: Number of the index list
 * Return: Value of a node index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node_index = head;

	if (head == NULL)
	{
		return (0);
	}

	while (i < index)
	{
		if (head == NULL)
			return (NULL);
		node_index = head->next;
		head = node_index;
		++i;
	}
	return (node_index);
}
