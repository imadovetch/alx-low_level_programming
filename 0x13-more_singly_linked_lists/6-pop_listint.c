#include "lists.h"

/**
 * pop_listint - Removes the first node of a listint_t list and returns its value.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The integer value of the removed node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head) {
	if (!head || !(*head)) {
		return (0);
	}

	listint_t *current = *head;
	int value = current->n;

	*head = current->next;
	current->next = NULL;
	free(current);

	return (value);
}
