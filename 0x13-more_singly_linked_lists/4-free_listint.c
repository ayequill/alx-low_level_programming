#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to first node
 *
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = head;

	while (current_node)
	{
		listint_t *next_node = current_node->next;

		free(current_node);
		current_node = next_node;
	}
}
