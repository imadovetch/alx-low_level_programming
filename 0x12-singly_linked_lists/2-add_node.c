#include "lists.h"

/**
 * add_node - Adds a new node at the end of a linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @str: The string to be added to the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */

list_t *add_node(list_t **head, const char *str)// add_node(&head,"ayoub");
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
		return (NULL);

	new_node->str = strdup(str);// *str // 
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
//(1 = head)->2>3//      (head=2)->( ex head = 1)->2 so the new head is 2
	new_node->len = strlen(str);
	new_node->next = *head;   //head->next = new_node
	*head = new_node;

	return (new_node);
}
