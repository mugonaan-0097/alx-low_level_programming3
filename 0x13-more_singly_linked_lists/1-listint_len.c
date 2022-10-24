#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements
 * in a linked listint_t list.
 * @h: name of the list
 * Return: The number of the nodes.
 */
size_t listint_len(const listint_t *h)
{
	if (h)
	{
		return (1 + listint_len(h->next));
	}
	return (0);
}
