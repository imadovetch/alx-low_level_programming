#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list in-place.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: Pointer to the new head of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head;
	listint_t *next = NULL;
	listint_t *prev = NULL;
	if (!*head)
		return (NULL);
	if(current->next == NULL)
		return *head;

	while (current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;

	return (prev);
}
