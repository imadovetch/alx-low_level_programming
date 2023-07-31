#include "lists.h"

/**
 * free_listint2 - Frees the memory occupied by all nodes of a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	*head = NULL;
}
