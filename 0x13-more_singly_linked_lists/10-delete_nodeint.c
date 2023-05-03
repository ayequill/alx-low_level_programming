#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position
 * @head: head of the linked list
 * @index: index of the node that should be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (head == NULL || *head == NULL)
	return (-1);

	if (index == 0)
{
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
}

	current = *head;

	for (i = 0; i < index - 1; i++)
	{
	if (current == NULL || current->next == NULL)
	return (-1);
	current = current->next;
}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
